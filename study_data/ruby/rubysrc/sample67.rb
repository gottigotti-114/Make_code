# クラス名：Jikyu
# プロパティ：jikyu 時給
#             hour 時間
#             yakin 夜勤の時間
#             name 名前
# メソッド：kyuyo 給与

# ただし夜勤の時給は+100円とする

# 出力例
# 　時給は1000円、時間は10時間、夜勤は5時間の坂根さんの時給

# 　　坂根さんは15500円

class Jikyu
    attr_accessor :jikyu, :hour, :yakin, :name

    def kyuyo
        (@jikyu * (@hour + @yakin)) + (@yakin * 100 )
    end
end

Calc = Jikyu.new

Calc.jikyu = gets.to_i
Calc.hour = gets.to_i
Calc.yakin = gets.to_i
Calc.name = gets.chomp

puts "時給は#{Calc.jikyu}円、時間は#{Calc.hour}時間、夜勤は#{Calc.yakin}時間の#{Calc.name}さんの時給\n#{Calc.name}さんは#{Calc.kyuyo}円"