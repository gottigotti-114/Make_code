# モジュール
module Keigen
  def zei
    shoukei * 0.08
  end
end

# クラス
class Shouhin
  attr_reader :name, :tanka, :suryo
  def initialize(name,tanka,suryo)
    @name = name
    @tanka = tanka
    @suryo = suryo
  end

  def shoukei
    @tanka * @suryo
  end

  def zei
    shoukei * 0.1
  end

  def total
    (shoukei + zei).to_i
  end

end
tomato = Shouhin.new("トマト",100,5)
tomato.extend Keigen

s = [
  Shouhin.new("ペン",100,10),
  Shouhin.new("鉛筆",80,5),
  tomato
]

instance = s[2]
instance.extend Keigen

s.each do |r|
  puts "#{r.name}\t#{r.tanka}\t#{r.suryo}\t#{r.shoukei}\t#{r.zei}\t#{r.total}"
end