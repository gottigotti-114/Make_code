#iとjに値を入れる
print "iに値を入れてください"
i = gets.to_i
print "jに値を入れてください"
j = gets.to_i

if i > 0
    if j > 0
        puts "iとjが正の数"
    else
        puts "iは正の数だがjは違う"
    end
else
    puts "iが正の数ではない"
end


#unless 条件
#    条件が正しくないときの処理
#end
#Else も使える
#    unless 条件
#        条件が正しくないときの処理
#    else
#        条件が正しい時の処理