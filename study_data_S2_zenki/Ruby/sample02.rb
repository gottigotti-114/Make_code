a = "a"
b = "a"
c = a

puts a.object_id, b.object_id, c.object_id
# object_idはオブジェクトのナンバー（アドレスの番号ともとらえられる）


puts "同じ値です" if a == b
puts "同じオブジェクトです" if a.equal?(b)
puts "aとcは同じオブジェクトです" if a.equal?(c)

puts "------------------------------------"
a2 = [1,2,3]
b2 = [1,2,3]
c2 = a2

puts a2.object_id, b2.object_id, c2.object_id
c2[0] = 10
p a2

puts "同じ値です" if a2==b2
puts "同じオブジェクトです" if a2.equal?(b2)
puts "a2とc2は同じオブジェクトです" if a2.equal?(c2)

puts "------------------------------------"

a3 = [1,2,3]
b3 = [2,3,4]
c3 = a3

puts a3.object_id, b3.object_id, c3.object_id
c3[0] = 10
p a3

puts "同じ値です"