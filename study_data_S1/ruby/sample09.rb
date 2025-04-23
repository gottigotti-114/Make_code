puts "数字の入力"
number=gets.to_i
puts "文章の入力"
str=gets
1.upto(number) do |i|
  1.upto(number) do |j|
    if 1<i&&i<number && 1<j &&j<number
      print "   "
      
    else
      print " a "
    end
  end
  puts
end