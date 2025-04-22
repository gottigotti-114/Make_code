def method(a:, b:, c:)
    p [a,b,c]
end

method(a: 10,b: 20,c: 30)
method(b: 10,c: 20,a: 30)
method(c: 10,a: 20,b: 30)

#シンボル型を引数にした場合、引数の順番が違えど、
#上のメソッドで定義した引数の順番に並び変えてくれる