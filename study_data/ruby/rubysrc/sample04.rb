#キーボードから整数を入れて正の数か負の数かを表示
print "値を入力："
i = gets.to_i

if i > 0
    puts "正の数です"
elsif i < 0
    puts "負の数です"
else
    puts "0です"
end