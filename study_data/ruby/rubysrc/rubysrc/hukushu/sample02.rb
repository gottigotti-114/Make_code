print "月："
month = gets.to_i

case month
when 3..5
    puts "春です"
when 6..8
    puts "夏です"
when 9..11
    puts "秋です"
when 12,1..2
    puts "冬です"
end
