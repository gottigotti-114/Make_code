text = "abaabcbdecsbcdddc"
pattern = /b/

regex = pattern.match(text)

regex.each do |r|
  puts r
end