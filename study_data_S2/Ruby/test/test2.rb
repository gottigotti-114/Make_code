total = 0

begin
    print "数値："
    val = gets.to_i
    total += val
end while val != 0

puts "合計は#{total}です"