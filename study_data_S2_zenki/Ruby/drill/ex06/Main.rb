require "./En"
require "./Shikakukei"
require "./Taiseki"
require "./Seihoukei"

calc1 = En.new(5,10)
calc2 = Shikakukei.new(4,6,10)
calc3 = Seihoukei.new(5)

puts calc1.menseki
puts calc2.menseki
puts calc3.menseki

puts "-----------------"
puts calc1.taiseki
puts calc2.taiseki
puts calc3.taiseki

