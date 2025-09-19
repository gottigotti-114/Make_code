class Bit
  @@counter = 1
  attr_accessor :bit, :color, :image
  attr_reader :my_number

  # コンストラクタ
  def initialize(on,off)
    @bit = 0
    @status = "off"
    @on = on
    @off = off
    @image = @off
    @my_number = @@counter
    @@counter += 1
  end

  # 出力部
  def put
    print @image
  end

  # 状態のチェンジ
  def change
    if @bit == 0
      @bit = 1
      @status = "on"
      @image = @on
    else
      @bit = 0
      @color = "off"
      @image = @off
    end
  end

  def change?
    if @bit == 1
      return true
    else
      return false
    end
  end

  
end
