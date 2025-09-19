module Koudou
  def aruku
    puts "#{shu}歩いています"
  end
  def hasiru
    puts "#{shu}走っています"
  end
  def taberu
    puts "#{shu}食べています"
  end
private
  def shu
    name = @name
    name ||= ""
    name += "が" if name != ""
    name
  end
end

class Human
  attr_accessor :name, :age

  def initialize(name=nil,age=0)
    @name, @age = name, age
  end
end

shugo = Human.new("藤原",19)
pikachu = Human.new

shugo.extend(Koudou)
pikachu.extend(Koudou)

shugo.aruku
pikachu.aruku

shugo.hasiru
pikachu.hasiru