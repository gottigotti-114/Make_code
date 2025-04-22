#文字列型の配列
arr = %w|a b c|

p arr

#シンボル型の配列
arr2 = %i|a b c|

p arr2

p "------------------------------"

#その他のやり方
arr3 = %w(a b c)
arr4 = %w!a b c!
arr5 = %w{a b c}
arr6 = %w^a b c^
arr7 = %w(a b | c) #パイプを入れたいとき
arr8 = %W|#{arr3} a b c|

p arr3
p arr4
p arr5
p arr6
p arr7
p arr8