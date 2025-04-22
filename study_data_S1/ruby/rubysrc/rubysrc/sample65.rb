# 問、
# 名前と時間を設定すると挨拶を行うクラス
# 3～10 : おはようございます　11～16 : こんにちは　17～2 : こんばんは

# aisatsu = Aisatsu.new
# print "名前："
# aisatsu.name = gets.chomp
# print "時間："
# aisatsu.jikan = gets.to_i
# puts "#{aisatsu.aisatsu}#{aisatsu.name}"

class Aisatsu
    attr_accessor :name
    attr_writer :jikan      #今回はセッターのみなのでaccessorを使ってもいいが、セキュリティ面でwriterを定義した方がよい
    def aisatsu
        case @jikan
        when 3..10
            "おはようございます。"
        when 11..18
            "こんにちは。"
        when 11..24,0..2
            "こんばんは。"
        else
            "正しくありませんよ。"
        end
    end
end

aisatsu = Aisatsu.new
print "名前："
aisatsu.name = gets.chomp
print "時間："
aisatsu.jikan = gets.to_i
puts "#{aisatsu.aisatsu}#{aisatsu.name}さん"
