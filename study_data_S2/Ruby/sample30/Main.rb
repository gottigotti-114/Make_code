regex = /abc/
loop do
  print "文字列："
  str = gets.chomp

  puts regex === str
end