print "文字列:"
str = gets.chomp

if /[^abc]/ =~ str
  puts "マッチ1"
end
# 携帯番号とマッチする正規表現
if /^0[7-9]0-[0-9]{4}-[0-9]{4}$/ =~ str
  puts "マッチ2"
end
# ホームページの正規表現
if /^http:\/\/www\.[a-z]{0,3}[\.or\.jp|\.co\.jp|ac\.jp]$/ =~ str
  puts "マッチ3"
end
