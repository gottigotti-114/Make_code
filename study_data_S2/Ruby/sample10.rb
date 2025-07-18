begin
    print "数字を入力してください"
    puts 100 / gets.to_i
rescue ZeroDivisionError
    puts "ゼロ以外を入力してください"
    retry
end