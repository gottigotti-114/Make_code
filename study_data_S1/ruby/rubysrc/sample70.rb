class Vegetable_data
    attr_accessor :name, :tanka, :cnt

    def initialize(name,tanka,cnt)
        @name, @tanka, @cnt = name, tanka, cnt
    end

    def sum
        @total = @tanka * @cnt
    end

    def zei
        (sum * 0.08).to_i
    end

    def sum_zeikomi
        sum + zei
    end

    def print_name
        puts "名前\t価額\t数量\t金額\t税\t合計"
        puts "-------------------------------------------------------------"
    end

    def print
        puts "#{@name}\t#{@tanka}\t#{@cnt}\t#{sum}\t#{zei}\t#{sum_zeikomi}"
        puts "-------------------------------------------------------------"
    end

end

Calc = [Vegetable_data.new("トマト",100,1),
        Vegetable_data.new("大根",200,2),
        Vegetable_data.new("白菜",300,3),
    ]

File.open("sample70_d.txt","r") do |file|
    record_data = []
    file.each_line do |record|
        name,tanka,cnt << record.split(',')
    end
    Calc << Vegetable_data.new(name.strip,tanka.strip,cnt.strip)
end

Calc[0].print_name
Calc.each do |data|
    data.print
end
