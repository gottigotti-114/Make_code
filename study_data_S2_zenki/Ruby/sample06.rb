a = 0b00001111
b = 0b10101010
puts (a & b).to_s(2)
puts (a | b).to_s(2)
puts (a ^ b).to_s(2)

a = 0b00001111
puts a
a << 1
puts a << 1 
puts a >> 1
