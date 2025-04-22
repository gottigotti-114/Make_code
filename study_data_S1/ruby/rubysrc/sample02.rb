#キーボードから入力された値が正の数なら「正の数です」と表示
i = gets.to_i
if i > 0
    puts "正の数です"
else
    puts "0か負の数です"
end
