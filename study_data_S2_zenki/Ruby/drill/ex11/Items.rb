class Items
  attr_reader :name, :price, :cnt

  def initialize(name,price,cnt)
    @name,@price,@cnt = name,price,cnt
  end

  def shoukei
    price * cnt
  end

  def zei
    (shoukei * 0.1).to_i
  end

  def total
    shoukei + zei
  end
end
