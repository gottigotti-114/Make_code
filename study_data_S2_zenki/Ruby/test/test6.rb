class Bmi
    attr_reader :name,:height,:heavy
    def initialize(name,height,heavy)
        @name,@height,@heavy = name,height,heavy
    end

    def bmi
        height_m = @height / 100.0
        bmi = @heavy / (height_m*height_m) * 100
        @BMI = (bmi.to_i / 100.0)
    end

    def kekka
        if @BMI == nil  #b = bmiとしてbを判定にかける方法もあり
            bmi
        end

        if @BMI < 18.5
            return "痩せている"
        elsif @BMI < 25
            return "普通"
        else
            return "太っている"
        end
    end
end

data = [Bmi.new("田中",170,60),Bmi.new("中山",175,80),Bmi.new("山田",165,50)]

puts "名前\t身長cm\t体重kg\tbmi\t判定"
data.each do |record|
    puts "#{record.name}\t#{record.height}\t#{record.heavy}\t#{record.bmi}\t#{record.kekka}"
end

.to_i /5
.to_i / 5