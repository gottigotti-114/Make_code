# "2つの数を入力し大きい順に出力"
print "1つ目の数"
num1 = gets.to_i
print "2つ目の数"
num2 = gets.to_i

if num1>num2
    puts num1
    puts num2
else
    puts num2
    puts num1
end