require "./En"
require "./Shikakukei"
require "./Taiseki"

calc1 = En.new(5,10)
calc2 = Shikakukei.new(4,6,10)

puts calc1.menseki
puts calc2.menseki

puts calc1.taiseki
puts calc2.taiseki

# calc3 = En.new(5)
# calc4 = Shikakukei.new(4,6)

# puts "---------------------------------"

# puts calc3.menseki
# puts calc4.menseki

# puts calc3.taiseki
# puts calc4.taiseki
