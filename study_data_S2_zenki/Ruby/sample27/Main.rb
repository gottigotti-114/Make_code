str = "abc1"

if /[1-9]/ =~ str
  puts "マッチ"
else
  puts "アンマッチ"
end

puts "--------------------"

print("パスワードを入力してください")