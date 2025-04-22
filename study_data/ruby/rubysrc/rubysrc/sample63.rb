# 問、
# キーボードから走行距離と走行時間を入力すると平均時速を求める。
# ただし、実行には以下のコードを使うこと

# sokudo = Sokudo.new
# print "走行距離："
# s.kyori = gets.to_i
# print "走行時間："
# s.jikan = gets.to_i
# puts "#{s.kyori}kmを#{s.jikan}時間で走ると平均時速は#{s.jisoku}です"

class Sokudo
    def kyori=(val)
        @kyori = val    #ここがセッター ※なぜセッター？>>データをセットするからセッター
    end
    def jikan=(val)
        @jikan = val    #ここがセッター
    end
    def kyori
        @kyori          #ここがゲッター ※なぜゲッター？>>データをゲットするからゲッター
    end
    def jikan
        @jikan          #ここがゲッター
    end

    def jisoku
        @kyori / @jikan
    end
end

s = Sokudo.new

print "走行距離："
s.kyori = gets.to_i
print "走行時間："
s.jikan = gets.to_i
puts "#{s.kyori}kmを#{s.jikan}時間で走ると平均時速は#{s.jisoku}km/hです"