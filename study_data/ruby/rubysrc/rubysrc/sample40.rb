#配列の宣言と代入
Array[10]

10.times do |i|
    Array[i] << i
    puts Array[i]
end

#配列２
arr = ["a","b","c","d","e"]
p arr

arr << "f"

p arr

#配列３

arr2 = []

10.times do |i|
    arr2 << i
end

p arr2

#配列４
arr3 = [1,2,3]

arr3[6] = 5

p arr3