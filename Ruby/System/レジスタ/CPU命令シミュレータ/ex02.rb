# ex01で命令コードのオペランド部にアドレス修飾部を追加した場合のファイル

class SimpleCPU
  attr_accessor :registers, :memory

  def initialize
    @registers = { "AX" => 0, "BX" => 0, "CX" => 0 }  # レジスタ定義
    @memory = Array.new(256, 0)  # メモリ（256バイトの配列として初期化）
  end

  def resolve_operand(operand)
    if operand.start_with?("[") && operand.end_with?("]") # 間接アドレッシング
      address = operand[1..-2].to_i  # `[]` の中身を整数化
      return @memory[address]
    elsif @registers.key?(operand) # レジスタオペランド
      return @registers[operand]
    else # 即値オペランド
      return operand.to_i
    end
  end

  def execute(instruction)
    parts = instruction.split(" ")
    opcode = parts[0]
    operand1 = parts[1]
    operand2 = parts[2]

    case opcode
    when "MOV" 
      if operand1.start_with?("[") # メモリアドレス指定（直接アドレッシング）
        address = operand1[1..-2].to_i
        @memory[address] = resolve_operand(operand2)
      else # レジスタへの代入
        @registers[operand1] = resolve_operand(operand2)
      end

    when "ADD"
      @registers[operand1] += resolve_operand(operand2)

    when "SUB"
      @registers[operand1] -= resolve_operand(operand2)

    else
      puts "未知の命令: #{opcode}"
    end
  end
end

# CPUを作成して命令を実行
cpu = SimpleCPU.new
cpu.execute("MOV AX 5")         # AX に 5 をセット
cpu.execute("MOV BX 10")        # BX に 10 をセット
cpu.execute("MOV [20] AX")      # メモリアドレス 20 に AX の値を保存
cpu.execute("MOV CX [20]")      # メモリアドレス 20 の値を CX にロード
cpu.execute("ADD AX CX")        # AX = AX + CX (5 + 5)

puts "レジスタの状態: #{cpu.registers}"  # => {"AX"=>10, "BX"=>10, "CX"=>5}
puts "メモリの状態（20番地）: #{cpu.memory[20]}"  # => 5