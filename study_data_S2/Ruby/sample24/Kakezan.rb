module Kakezan
  def seki(*atai)
    s = 1
    atai.each do |a|
      s *= a
    end
    s
  end

  module_function :seki
end