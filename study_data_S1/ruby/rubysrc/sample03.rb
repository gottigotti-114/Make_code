#3つの数を入力して大きいほうを出力する
print "１つ目の数："
i = gets.to_i
print "２つ目の数："
j = gets.to_i
print "3つ目の数："
k = gets.to_i
if i>j
    max = i
else
    max = j
end

if k>max
    max = k
end

print "最大値は"
puts max