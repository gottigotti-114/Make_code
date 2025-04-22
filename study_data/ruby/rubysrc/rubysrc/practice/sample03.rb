quick_left(left,pivot-1,prr)
quick_right(pivot+1,right,prr)

def quick(left,pivot,right,prr)
    while i >left





prr = []

print "乱数を生成する数："
random_value_count = gets.to_i
random_value_count.times do |i|
    prr[i] = rand(1..100)
end

left = 0
right = random_value_count - 1
pivot = right / left

quick(left,pivot,right,prr)

random_value_count.times do |i|
    puts prr[i]
end
