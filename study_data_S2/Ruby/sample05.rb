def binary_sum(a,b)
    a &&= 1
    a ||= 0
    
    b &&= 1

    b ||= 0

    return a+b
end

puts binary_sum(100,100)
puts binary_sum(100,nil)
puts binary_sum(nil,100)
puts binary_sum(nil,nil)

