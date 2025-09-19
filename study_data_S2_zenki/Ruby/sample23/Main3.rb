Sale = Struct.new(:name, :tanka, :suryo) do
  def kingaku
    tanka * suryo
  end
end

sale = Sale.new("鉛筆",80,5)
puts "#{sale.tanka}円の#{sale.name}を#{sale.suryo}個買うと#{sale.kingaku}円"