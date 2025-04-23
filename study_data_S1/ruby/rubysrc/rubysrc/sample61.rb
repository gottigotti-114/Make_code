# 問、
# キーボードから単価と数量を取得
# 合計点と平均点を求めるクラスを作成し、以下のように出力

# 例
# 単価：100
# 数量：10
# 100円の物を10個買うと1000円

class CalcKingaku
    def tanka_i=(val)
        @tanka = val
    end
    def suryou_i=(val)
        @suryou = val
    end
    
    def total
        @tanka * @suryou
    end

    def tanka_o
        @tanka
    end
    def suryou_o
        @suryou
    end
end

Calc = CalcKingaku.new

print "単価："
Calc.tanka_i = gets.to_i
print "数量："
Calc.suryou_i = gets.to_i
puts "#{Calc.tanka_o}円の物を#{Calc.suryou_o}個買うと#{Calc.total}円"