#条件演算子を使った場合
1.upto(10) do |i|
    puts "#{i}は#{i % 2 == 0 ? '偶数' : '奇数'}です"
end

#条件演算子を使わなかった場合
1.upto(10) do |i|
    print "#{i}は"
    if i % 2 == 0
        print "偶数"
    else
        print "奇数"
    end
    puts "です"
end
