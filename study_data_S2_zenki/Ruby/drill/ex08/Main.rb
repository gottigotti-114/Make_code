require "./Uriage"
require "./Uriage_food"

data1 = [
    Uriage.new("ペン",100,10),
    Uriage_food.new("トマト",100,10)
]

puts "名前\t単価\t数量\t金額\t税\t合計"

data1.each do |item|
    puts "#{item.name}\t#{item.tanka}\t#{item.cnt}\t#{item.kingaku}\t#{item.tax}\t#{item.total}"
end