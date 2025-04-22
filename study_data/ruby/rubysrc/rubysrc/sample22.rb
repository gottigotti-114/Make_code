#時間を入力したら、あいさつをするPG
print("月を入力")
i = gets.to_i

case i
when 4...12
    puts "おはよう"
when 12...19
    puts "こんにちは"
when 19..23
    puts "こんばんは"
else
    puts "そんな時間はありません"
end