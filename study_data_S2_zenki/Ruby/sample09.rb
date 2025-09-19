# 例外処理
# begin
#     print "数値を入力"
#     i = gets.to_i
#     puts 10 / i
#     puts "正常に終了しました"
# rescue => e
#     puts "ゼロが入力されました"
#     puts e.class
# else
#     puts "正常に終了しました"
# ensure
#     puts "処理を終了しました"
# end
# puts "---------------------------------"
# ## 例外処理2
# begin
#     print "数値を入力"
#     i = gets.to_i
#     puts 10 / i.aaa
#     puts "正常に終了しました"
# rescue ZeroDivisionError
#     puts "ゼロが入力されました"
# rescue NoMethodError
#     puts "実行できないメソッドです"
# else
#     puts "正常に終了しました"
# ensure
#     puts "処理を終了しました"
# end
def calc
    begin
        print "数値を入力"
        i = gets.to_i
        puts 10/i
        puts i.aaaa
    rescue ZeroDivisionError => e
        puts e.backtrace # -> sample09.rb:35:in '/'
        puts e.message # -> divided by 0
        puts "ゼロが入力されました"
    rescue NoMethodError => e
        puts "実行できないメソッドです"
    rescue =>e
        puts e.class
        puts "エラーが発生しました"
    end
end
calc