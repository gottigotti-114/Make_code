arr1 = %w|a b c d e|
arr2 = %w|A B C D E|
arr3 = []

arr1.each do |text|
    arr3 << text
end
arr2.each do |text|
    arr3 << text
end

p arr3

#問題２

arr3 = []

5.times do |i|
    arr3 << arr1[i]
    arr3 << arr2[(i+1)*-1]
end

p arr3