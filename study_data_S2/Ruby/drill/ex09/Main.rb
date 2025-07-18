# print "数値を入力してください>>"
# num = gets.to_i
# ans = 0




# begin
#   ans = 100 / num
#   ans.each{}
# rescue ZeroDivisionError
#   puts "ゼロが入力されました"
# rescue NoMethodError
#   puts "メソッドがありません"
# end

raise ZeroDivisionError,"ゼロで割りました"