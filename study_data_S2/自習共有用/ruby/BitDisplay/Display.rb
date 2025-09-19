class Display
  attr_accessor :arr
  def initialize(width,height)
    @width = width
    @height = height

    #初期画面を決める
    #@arr = Array.new(@height) { Array.new(@width,nil) }
    #@arr.each do |record|
    #  record.each do |row|
    #    row = Bit.new("●","○")
    #    p row
    #  end
    #end

    @arr = Array.new(@height) { Array.new(@width) { Bit.new("●", "○") } }
  end

  # 出力部
  def print
    @arr.each do |record|
      record.each do |row|
        row.put
      end
      puts
    end
  end

  #Bit操作
  def change(x,y)
    @arr[y][x].change
  end

  def design
    d = ""
    @arr.each do |record|
      record.each do |row|
        d = "#{d+row.image}"
      end
      d = d + "\n"
    end
    return d
  end
end
