#テストの点数から評価を決める
point = gets.to_i

case point
when 0...60
    puts "不可"
when 60...70
    puts "可"
when 70...80
    puts "良"
when 80..100
    puts "優"
else
    puts "error"
end
