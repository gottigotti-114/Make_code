print "気温を入力してください"
k = gets.to_i

if k >= 35
    ans="猛暑日"
elsif k>= 30
    ans="真夏日"
elsif k >= 25
    ans="夏日"
else
    ans="過ごしやすい日"
end
puts ans