class CPU
    attr_accessor :Z, :S, :C, :O
    
    def initialize
      @Z = false  # ゼロフラグ
      @S = false  # サインフラグ
      @C = false  # キャリーフラグ（ボロー含む）
      @O = false  # オーバーフローフラグ
    end
  
    def execute(operation, a, b)
      result = 0
      
      case operation
      when :add
        result = a + b
        @C = result > 255  # 8ビット以上ならキャリー発生
        @O = (a.positive? && b.positive? && result.negative?) || (a.negative? && b.negative? && result.positive?) # 符号オーバーフロー
      when :sub
        result = a - b
        @C = result.negative?  # 減算でボロー発生
      end
  
      @Z = result == 0  # ゼロフラグ
      @S = result.negative? # 負数ならサインフラグ
  
      puts "Result: #{result}"
      puts "Flags - Z: #{@Z}, S: #{@S}, C: #{@C}, O: #{@O}"
    end
  end
  
  cpu = CPU.new
  cpu.execute(:add, 200, 60) # 加算してキャリーが発生するか確認
  cpu.execute(:sub, 10, 20)  # 減算してボローが発生するか確認
  cpu.execute(:add, 127, 1)  # オーバーフロー発生のテスト
  cpu.execute(:sub, 5, 5)    # ゼロフラグが立つケース