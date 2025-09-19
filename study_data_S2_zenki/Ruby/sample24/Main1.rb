module Kakezan
  def seki(*atai)
    s = 1
    atai.each do |a|
      s *= a
    end
    s
  end

  module_function :seki
end



puts "80円の鉛筆を5個買うと#{Kakezan.seki(80,5)}円"
puts "縦が10cm、横が20cmの長方形の面積は#{Kakezan.seki(10,20)}cm2"
puts "縦が10cm、横が20cm、高さ30cmの直方体の面積は#{Kakezan.seki(10,20,30)}cm3"