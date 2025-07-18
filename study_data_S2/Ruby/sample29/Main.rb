# 先頭が24で始まりその次が1か2か3、そのあとが数字3桁の正規表現
regex = /^24[123]\d{3}$/
regex2 = Regexp.new('^24[123]\d{3}$')
regex3 = %r{^24[123]\d{3}$}
loop do 
  print "パターン入力>>"
  str = gets.chomp

  if regex =~ str
    puts "学籍番号１にマッチ"
  end
  if regex2 =~ str
    puts "学籍番号２にマッチ"
  end
  if regex3 =~ str
    puts "学籍番号３にマッチ"
  end
end

