print "キーボード入力："
text = gets.chomp

puts "#{text.size}文字(#{text.bytesize}バイト)入力されました"

# char = []

# byte_text = text.to_s(2)
# cnt = 0
# byte = 0
# text.split('') do |c|
#   cnt += 1
# end
# byte_text.split('') do
#   byte += 1
# end

# puts "#{}"