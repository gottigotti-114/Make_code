以下のクラスを作成
クラス名：Jikyu
プロパティ：jikyu … 時給
            hour  … 時間
            name  … 名前
メソッド：kyoyu   … 給与(時間*時給)



class Jikyu
    attr_accessor :jikyu, :hour, :name

    def kyuyo
        @hour * @jikyu
    end
end

Calc = Jikyu.new

print "時給>>"
Calc.jikyu = gets.to_i
print "時間>>"
Calc.hour = gets.to_i
print "名前>>"
Calc.name = gets.chomp

puts "#{Calc.name}さんは時給#{Calc.jikyu}円で#{Calc.hour}時間働き#{Calc.kyuyo}円"