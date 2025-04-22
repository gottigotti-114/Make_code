total_big = 0
total_small = 0
1.upto(10) do |num|
    if num > 5
        total_big += num
    elsif num <= 5
        total_small += num
    else
        puts "エラー"
    end
end
puts "5以下の数の和：#{total_small}"
puts "5より大きい数の和：#{total_big}"


