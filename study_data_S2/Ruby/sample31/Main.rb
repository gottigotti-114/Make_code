# regex = /(\d{2})-(\d{4})/

# print "文字列："
# str = gets.chomp
# p regex.match(str)

# print "文字列："
# str2 = gets.chomp
# result = regex.match(str2)
# p result[0]
# p result[1]
# p result[2]

# p result.pre_match
# p result.post_match

# result = /a.+z/.match("abczabczabcz")
# p result[0]

regex = /a.+z/
print "文字列"
str = gets.chomp
regex.match(str) do |result|
  p result[0]
  p result.pre_match
  p result.post_match
end

