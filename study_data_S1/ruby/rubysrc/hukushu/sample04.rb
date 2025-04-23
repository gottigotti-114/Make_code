num = []
0.upto(2) do |i|
    print "値："
    num[i] = gets.to_i
end
num.each do |i|
    print i,"："
    i.times do
        print "*"
    end
    puts
end