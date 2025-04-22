total1 = 0
total2 = 0
1.upto(10) do |num|
    if num <= 5
        total1 = total1 + num
    else
        total2 = total2 + num
    end
end
print "5以下の数の和：",total1
print "\n5より大きい数の和：",total2