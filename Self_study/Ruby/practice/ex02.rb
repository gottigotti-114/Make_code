pattern = Regexp.new("aaa")

p pattern.match("aaa")

pattern2 = /bbb/

p pattern2.match("bbb")

pattern3 = %r(ccc)

p pattern3.match("ccc")


pattern4 = /^https?:\/\/(www|\w{2,})\..*\.(jp|com)$/
texts = []

texts[0] = "https://www.japanese.ac.jp"
texts[1] = "http://facebook.new.ac.jp"
texts[2] = "htTp://instagram.users.123fa345dda35323f1-2321fa3a-userfiles.com"
texts[3] = "https://www.jp"


#if pattern4 =~ text1
#  puts "URL1完了"
#end
#if pattern4 =~ text2
#  puts "URL2完了"
#end
#if pattern4 =~ text3
#  puts "URL3完了"
#end
#if pattern4 =~ text4
#  puts "URL4完了"
#end


arr = [
  "because",
  "banana",
  "apple",
  "abstract",
  "gaverage",
  "table"
]

pattern = /b/
prev = check = nextis = ""
arr.each do |r|
  hantei = pattern.match(r)
  if !hantei.nil?
    if !hantei.pre_match.nil?
      prev = hantei.pre_match
    end
    if !hantei[0].nil?
      check = hantei[0]
    end
    if !hantei.post_match.nil?
      nextis = hantei.post_match
    end

    puts "一致した文字は「#{check}」で、直前の文字が「#{prev}」で、直後の文字が、「#{nextis}」です。"
  end

end
