#問、
# 円の面積と円周を求めるクラスを作成
# インスタンスを作成し、以下の通り出力
# ただし、円周率は3.14にし計算式は
# 面積：半径 * 半径 * 円周率
# 円周：２ * 半径 * 円周率
# とする
# キーボードから半径を取得する

# 半径：１０
# 面積：3.14
# 円周：62.8

class Calc_en
    def hankei(r)
        @hankei = r
    end
    def menseki
        @hankei * @hankei * 3.14
    end
    def enshu
        2 * @hankei * 3.14
    end
end

en_Calc = Calc_en.new

print "半径："
en_Calc.hankei(gets.to_i)
puts "面積：#{en_Calc.menseki}\n円周：#{en_Calc.enshu}"