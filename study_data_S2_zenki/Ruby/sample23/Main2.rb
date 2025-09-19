Sale = Struct.new(:name,:tanka,:suryo)

class Hanbai
  attr_accessor :sale

  def shokei
    @sale.tanka * @sale.suryo
  end
  def zei
    (shokei * 0.1).to_i
  end
  def gokei
    shokei + zei
  end
end
arr = [Sale.new("鉛筆",80,5),Sale.new("トマト",200,5),Sale.new("ペン",100,3)]
h = Hanbai.new

arr.each do |s|
  h.sale = s
  puts "#{h.sale.name}\t#{h.sale.tanka}\t#{h.sale.suryo}\t#{h.shokei}\t#{h.zei}\t#{h.gokei}"
end