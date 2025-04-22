class Matrix_Calc_Test
    attr_reader :name
    attr_accessor :kokugo, :sugaku, :eigo, :cnt

    def initialize(name = "",kokugo = 0,sugaku = 0,eigo = 0,cnt = 0)
        @name,@kokugo,@sugaku,@eigo, @cnt= name, kokugo.to_i, sugaku.to_i, eigo.to_i, cnt.to_i
        @kokugo_t = 0
        @sugaku_t = 0
        @eigo_t = 0
    end
    
    def total
        @total = @kokugo + @sugaku + @eigo
    end

    def ave
        (@ave = total / @cnt).to_i
    end

    def make_matrix_init
        puts "名前\t国語\t数学\t英語\t合計\t平均"
    end

    def make_matrix
        puts "#{@name}\t#{@kokugo}\t#{@sugaku}\t#{@eigo}\t#{total}\t#{ave}"
    end

    def finish_calc
        @kokugo_t += @kokugo
        @sugaku_t += @sugaku
        @eigo_t += @eigo
    end

    def make_matrix_finish_total
        @kokugo_t + @sugaku_t + @eigo_t
    end

    def make_matrix_finish_ave
        (make_matrix_finish_total / @cnt).to_i
    end

    def make_matrix_finish
        puts "合計\t#{@kokugo_t}\t#{@sugaku_t}\t#{@eigo_t}\t#{make_matrix_finish_total}\t#{make_matrix_finish_ave}"
    end
end

calc = [Matrix_Calc_Test.new("山田",100,90,80,1),Matrix_Calc_Test.new("田中",70,60,50,2),Matrix_Calc_Test.new("中山",40,30,20,3)]

data = []
cnt = 3
File.open("sample71.txt","r") do |file|
    file.each_line do |record|
        data = record.strip.split(',')
        cnt += 1
        calc << Matrix_Calc_Test.new(data[0],data[1],data[2],data[3],cnt)
    end
end










finish_calc = Matrix_Calc_Test.new
finish_calc.cnt = cnt

calc[0].make_matrix_init
calc.each do |record_data|
    record_data.make_matrix
    finish_calc.kokugo = record_data.kokugo
    finish_calc.sugaku = record_data.sugaku
    finish_calc.eigo = record_data.eigo
    finish_calc.finish_calc
end
finish_calc.make_matrix_finish


