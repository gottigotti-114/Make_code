loop_index = 0
loop do
    puts loop_index
    loop_index += 1
    break if loop_index == 10
end


a = 0
1.upto(10) do |i|
    a += 1
    redo if a == 5
    p [a,i]
end
