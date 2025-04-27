# CPUの仕組みを作ってみる

class SimpleCPU
    attr_accessor :memory, :pc, :registers
  
    def initialize
      @memory = {
        0 => [:LOAD, :R1, 100],  # R1 に メモリアドレス 100 の値をロード
        1 => [:LOAD, :R2, 101],  # R2 に メモリアドレス 101 の値をロード
        2 => [:ADD, :R1, :R2],   # R1 = R1 + R2
        3 => [:STORE, :R1, 102], # R1 の値を メモリアドレス 102 に保存
        4 => [:HALT]             # 実行終了
      }
      @data_memory = { 100 => 5, 101 => 10, 102 => 0 }
      @pc = 0  # プログラムカウンタ
      @registers = { R1: 0, R2: 0 }
    end
  
    def fetch_instruction
      puts "\n命令フェッチ: PC=#{@pc}, 命令=#{@memory[@pc]}"
      @memory[@pc]  # 現在の命令を取得
    end
  
    def fetch_operand(op)
      if @data_memory.key?(op)
        puts "  オペランドフェッチ: メモリ[#{op}] = #{@data_memory[op]}"
        @data_memory[op]
      elsif @registers.key?(op)
        puts "  オペランドフェッチ: レジスタ[#{op}] = #{@registers[op]}"
        @registers[op]
      else
        op  # 直接値を返す場合
      end
    end
  
    def execute_instruction(instruction)
      case instruction[0]
      when :LOAD
        @registers[instruction[1]] = fetch_operand(instruction[2])
      when :ADD
        @registers[instruction[1]] += fetch_operand(instruction[2])
      when :STORE
        @data_memory[instruction[2]] = @registers[instruction[1]]
      when :HALT
        puts "\nHALT: CPU停止"
        return false
      end
      true  # 実行続行
    end
  
    def run
      puts "=== 仮想CPU 実行開始 ==="
      loop do
        instruction = fetch_instruction
        #この条件がunless(偽)だった場合、breakする
        break unless execute_instruction(instruction)
        @pc += 1
      end
      puts "=== 実行終了 ==="
      puts "最終レジスタ状態: #{@registers}"
      puts "最終メモリ状態: #{@data_memory}"
    end
  end
  
  cpu = SimpleCPU.new
  cpu.run