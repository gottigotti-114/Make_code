i = gets.to_i
case i
when 'a'
  puts "aです"
when 1
  puts "1です"
when 2..10
  puts "2から10以下です"
when 11...15
  puts "2から15未満です"
else
  puts "特に何もありません"
end