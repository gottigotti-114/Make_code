list = [4,6,3,9,7]

max = 0
min = 100

list.each do |num|
    if max < num
        max = num
    end
    if min > num
        min = num
    end
end

puts "配列の最小値：#{min}"
puts "配列の最大値：#{max}"