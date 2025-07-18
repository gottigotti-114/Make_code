regex = /[a-z]{4}/i
print "文字列："
str = gets.chomp
result = regex.match(str)
p result[0] if result
