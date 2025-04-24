#注釈
# 命令コードを[ A ][ B ][ C ]と分けると、Aが命令コード、Bがレジスタ部(オペランド1)、Cがアドレス定数部(今回は格納データとする：オペランド2)

# 復習：アドレッシング方式
# 直接アドレッシング：cpu.execute("MOV AX [3000]") ->AXにアドレス番号3000の値を取得し、割り当てる
# 間接アドレッシング：cpu.execute("MOV AX BX") -> AXにBXのアドレス先の値を取得し、割り当てる
# インデックスアドレッシング：cpu.execute("MOV AX [ARRAY + SI]") -> AXに配列ARRAYのSI番目(添え字)の値を取得し、割り当てる
# ベースアドレッシング：cpu.execute("MOV AX (BX + 10)") -> AXにBXにオフセット(アドレス移動の付与数値)をしたアドレス先の値を取得し、割り当てる
# ベース+インデックスアドレッシング：cpu.execute("MOV AX [BX + SI]") -> 上のやつを混ぜた感じ。BXに添え字を使ってアドレス間を移動し、その値を割り当てる
# 相対アドレッシングcpu.execute("MOV AX [現在の命令 + 10byte]") -> 現在の命令(MOV)から10バイト先のアドレスを取得し、割り当てる

# リロケータブル（再配置可能）
# ベースアドレッシングがあったとして、何らかの事象でAXの[BX+10]のアドレス先の値がずれて変わったとしてもBXもそれに合わせて変えてくれるので、結局は参照先は同じ値を示せますよ～という性質

# 仮想CPUクラス
class SimpleCPU
  attr_accessor :registers

  def initialize
    @registers = { "AX" => 0, "BX" => 0 } # レジスタを定義 -> AXというレジスタ,BXというレジスタ
  end

  def execute(instruction)
    parts = instruction.split(" ") # 命令を分割
    opcode = parts[0]              # 命令コード部
    operand1 = parts[1]            # オペランド1
    operand2 = parts[2]     # オペランド2（数値なら変換）
    operand2 = operand2&.to_i if opcode == "MOV"
    case opcode
    when "MOV"  # 値をレジスタに格納
      @registers[operand1] = operand2
    when "ADD"  # レジスタの値を加算
      @registers[operand1] += @registers[operand2]
    when "SUB"  # レジスタの値を減算
      @registers[operand1] -= @registers[operand2]
    else
      puts "未知の命令: #{opcode}"
    end
  end
end

# CPUを作成して命令を実行
cpu = SimpleCPU.new
cpu.execute("MOV AX 10")  # AX に 10 をセット
cpu.execute("MOV BX 5")   # BX に 5 をセット
cpu.execute("ADD AX BX")  # AX = AX + BX (10 + 5)

puts cpu.registers  # => {"AX"=>15, "BX"=>5}