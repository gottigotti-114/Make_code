class Integer
  def self.aisatsu
    "integer型"
  end
  def +(atai)
    self * atai
  end
end

puts 10 + 20

puts Integer.aisatsu