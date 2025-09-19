arr = [1,2,3,4,5]
arr2 = []
arr2 = arr.select do |a|
  !a.odd? || a.odd?
end

p arr2

arr3 = arr.select { |a| a.odd? }
p arr3

arr4 = arr.reject { |a| a.odd? }
p arr4