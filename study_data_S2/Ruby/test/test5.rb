class Print_Matrix
    attr_reader :name, :cnt, :in, :out

    def initialize(name=nil, cnt=nil, in_cnt=nil, out=nil)
        @name,@cnt,@in,@out = name,cnt,in_cnt,out
    end

    def print_start
        puts "商品名\t前月残\t入庫\t出庫\t在庫数"
    end

    def zaiko
        @cnt + @in - @out
    end
end

info = [
    Print_Matrix.new("トマト",100,300,350),
    Print_Matrix.new("卵",50,400,350),
    Print_Matrix.new("鉛筆",30,20,30)
]

info[0].print_start
info.each do |record|
    puts "#{record.name}\t#{record.cnt}\t#{record.in}\t#{record.out}\t#{record.zaiko}"
end