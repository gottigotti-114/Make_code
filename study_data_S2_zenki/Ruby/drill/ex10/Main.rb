require "./Rows"
require "./Tests"

# テストの点を入れたら成績評価を行うクラスを作成し下記表を出力しなさい
# 100~80 優 79~70 良 69~60 可 それ以外 不可
begin
  student = [
    Tests.new("田中",101,80,70),
    Tests.new("中山",80,70,60),
    Tests.new("山田",59,80,-1)
  ]

  puts "名前\t国語\t評価\t数学\t評価\t英語\t評価\t合計"

  student.each do |s|
    puts "#{s.name}\t#{s.kok.point}\t#{s.kok.hyoka}\t#{s.su.point}\t#{s.su.hyoka}\t#{s.ei.point}\t#{s.ei.hyoka}\t#{s.total}"
  end
rescue => e
  puts "エラーが発生しました:#{e.message}"
end
