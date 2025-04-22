print "値1を入力"
num1 = gets.to_i
print "値２を入力"
num2 = gets.to_i
print "値３を入力"
num3 = gets.to_i

if num1 > num3
    atai1,atai3 = atai3,atai1       #ワークスペースは使わない方法
end
if num2 > num3
    atai2,atai3 = atai3,atai2
end
if num1 > num2
    atai1,atai2 = atai2,atai1
end

puts num3,num2,num1

    
    