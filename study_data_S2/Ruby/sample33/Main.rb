str = "abcabcabc"
result = /(a.*c)/.match(str)
p result[0]

str = "abcabcabc"
result = /(a.*?c)/.match(str)
p result[0]

p "=--------------------"

p str.gsub(/(a.*?c)/,"def")
p str