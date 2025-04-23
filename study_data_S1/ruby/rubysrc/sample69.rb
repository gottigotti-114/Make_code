class Print_testData
    # attr_writer :name, :kokugo, :math, :eigo  もしCalc.name = 名前都かの場合有効
    # attr_writer :name, :kokugo, :math, :eigo　もしputs Calc.nameとかの場合有効


    def initialize(name,kokugo,math,eigo)
        @name,@kokugo,@math,@eigo =name, kokugo, math, eigo
    end

    def sum
        @total = @kokugo + @math + @eigo

    end

    def ave
        @ave_data = sum / 3
    end

    def print
        puts "名前\t国語\t数学\t英語\t合計\t平均\t最大値"
        puts "#{@name}\t#{@kokugo}\t#{@math}\t#{@eigo}\t#{sum}\t#{ave}\t#{max}"
        puts "-----------------------------------------------------------------"
    end

    def max
        @print3 = "最大値"
        @max = @kokugo
        if @max <= @math
            @max = @math
        elsif @max <= @eigo
            @max = @eigo
        end
        return @max
    end
        
end

arr = [Print_testData.new("田中",100,90,81),Print_testData.new("中山",70,60,50),Print_testData.new("山田",40,30,20)]

arr.each do |data|
    data.print
end

