require "./En"
require "./Shikakukei"
require "./Taiseki"
calc1 = En.new(5)
calc2 = Shikakukei.new(4,6)
calc1_tai = Taiseki.new(calc1,10)
calc2_tai = Taiseki.new(calc2,10)

puts calc1.menseki
puts calc2.menseki


puts calc1_tai.taiseki
puts calc2_tai.taiseki