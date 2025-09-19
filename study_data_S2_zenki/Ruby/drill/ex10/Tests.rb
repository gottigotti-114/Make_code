class Tests
  attr_accessor :name, :kok, :su, :ei

  def initialize(name,kok,su,ei)
    @name = name
    @kok = Rows.new(kok)
    @su = Rows.new(su)
    @ei = Rows.new(ei)
  end

  def total
    @kok.point + @su.point + @ei.point
  end
end