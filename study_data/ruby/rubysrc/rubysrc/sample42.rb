#問題　arr3にa,A,b,B,c,Cを入れよう
arr1 = ["a","b","c"]
arr2 = ["A","B","C"]

arr3 = []
3.times do |i|
    arr3 << arr1[i]
    arr3 << arr2[i]
end

p arr3