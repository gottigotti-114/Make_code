#左が初期値がない場合
def method(a=1, b=2, c)
    p [a,b,c]
end
method(10,20,30)
method(10,20)
method(10)

puts "---------------------------"

#全部初期値がある場合
def method(a=1, b=2, c=3)
    p [a,b,c]
end
method(10,20,30)
method(10,20)
method(10)

puts "---------------------------"

#真ん中に初期値がない場合>> エラーになる
# def method(a=1, b, c=3)
#     p [a,b,c]
# end
# method(10,20,30)
# method(10,20)
# method(10)

