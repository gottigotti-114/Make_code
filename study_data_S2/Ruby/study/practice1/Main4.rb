arr1 = [1,2,3]

arr2 = [1,2,3]

if arr1 = arr2
  puts "二つの配列は同じである"
end

arr3 = [1,2,3]
arr4 = arr3

if arr3.eql?(arr4)
  puts "二つの配列は同じオブジェクトである"
end

