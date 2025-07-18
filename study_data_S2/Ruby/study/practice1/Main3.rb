# puts true || 1 = true
# puts false || 2 = 2
# puts true && 3 = 3
# puts false && 4 = false

a = 3
a ||= 1
puts a
# a = 3

a = false # (またはnil)
a ||= 1
puts a
# a = 1

a = 3
a &&= 1
puts a
# a = 1

a = false # (またはnil)
a &&= 1
puts a
# a = false

# a ||= 1はa = a || 1なので、aか1で論理和して、Trueだったらaにいれるということになる
# a &&= 1はa = a && 1なので、aか1で論理積して、Trueだったらaにいれるということになる