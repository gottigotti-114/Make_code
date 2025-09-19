# ソート -> Q.この仕組みはどういうこと？
puts [3,1,4,2].sort { |a,b| a <=> b}

# 比較演算子 -> 前者がfalseになるのは同一性の観点でわかるが、後者が同値性なのにfalseになるのはなぜ？
class Person
  attr_accessor :a, :b
  def initialize(a,b)
    @a,@b = a,b
  end
end

h1 = Person.new(1,2)
h2 = Person.new(1,2)

p h1.equal?(h2)
p h1 == h2

# 条件演算子
c = 4
d = 5
puts c > d ? "cがでかい" : "dがでかい"

# その他演算子 -> 1セクション目と、2セクション目は納得だが、3セクション目で全部2が入るのはなぜ？左がtrueだったときのみしか入らないのでは？
a = nil
b = ""
c = false
d = 1

p a&.to_s
p b&.to_s
p c&.to_s
p d&.to_s

p a ||= 3
p b ||= 3
p c ||= 3
p d ||= 3

p a &&= 2
p b &&= 2
p c &&= 2
p d &&= 2