class Records
    attr_accessor :name, :price, :cnt
    
    def initialize(name,price,cnt)
        @name = name
        @price = price.to_i
        @cnt = cnt.to_i
    end

    def total
        @price * @cnt
    end
end

################################
# records = [
#     ["ペン",100,10],
#     ["赤ペン",200,3],
#     ["筆箱",400,1]
# ]

# calc = Records.new(records[0])
# puts calc.total

