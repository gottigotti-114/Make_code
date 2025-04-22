#iの値が、1から10の間の奇数ならodd,偶数ならevenと表示
i = gets.to_i

case i
when 1,3,5,7,9
    puts "odd"
when 2,4,6,8,10
    puts "even"
else
    puts "Error"
end