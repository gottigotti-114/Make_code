arr = [1,2,3,4,5]

t = arr.inject(10) do |total,a|
  total += a
end

puts t
