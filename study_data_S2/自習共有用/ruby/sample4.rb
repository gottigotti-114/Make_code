str1 = "Hello"

puts "Mathed" if /hello/i =~ str1

#str2 = "Hello"
#puts str2
#puts str2.upcase!
#puts str2

str3 = "a\nb"
str4 = "ab"

puts "Matchd2" if /a.b/ =~ str3
puts "Matched3" if /a.b/ =~ str4

str5 = "Are you from Canada ?"
puts "Matched4" if /Areyoufrom.*?/ =~ str5
puts "Matched5" if /Areyoufrom.*?/x =~ str5

str6 = "AreyoufromCanada"
p /Are you from Canada/x.match(str6)

puts "Hello\sWorld"

pattern = /
  (http|https)  # httpかhttpsか決める
  :\/\/         # プロトコルの後のお決まり
  .+\..+        # github.comやgoogle.comなど
  \/.+        # スラッシュの後のファイル名
/x

url = "https://github.com/shugo114.home.index"

p pattern.match(url)