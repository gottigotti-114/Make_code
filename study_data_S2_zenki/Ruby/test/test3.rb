print "いくらまで足しますか："
max = gets.to_i
total = 0
cnt = 0

1.upto(max-1) do |i|
    cnt = i
    print "#{cnt}+"
    total += i
end

total += (cnt + 1)
print "#{cnt + 1}=#{total}"