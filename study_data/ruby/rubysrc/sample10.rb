print "値１を入力"
num1 = gets.to_i
print "値２を入力"
num2 = gets.to_i

if num1 > num2
    puts num1 num2
elsif num1 < num2
    puts num2 num1
else
    print "Error"