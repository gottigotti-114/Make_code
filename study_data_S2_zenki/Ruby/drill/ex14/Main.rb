# 日付のチェック
day = "31"
if /[0-3][0-9]/ =~ day
  puts "マッチ"
else
  puts "アンマッチ"
end

puts "###########################"

str = "b"

if /[a[bc]|x[yz]]/ =~ str
  puts "マッチ"
else
  puts "アンマッチ"
end