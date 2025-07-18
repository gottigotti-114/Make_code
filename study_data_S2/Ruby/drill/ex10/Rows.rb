class Rows
  #このクラス専用のエラーメッセージのため、ここでクラスを継承
  class RangeError < StandardError
    def message
      "範囲外が入力されました"
    end
  end
  attr_accessor :point
  def initialize(point)
    raise RangeError if point < 0 || point > 100
    @point = point
  end

  def hyoka
    case @point
    when 80..100
      return "優"
    when 70..79
      return "良"
    when 60..69
      return "可"
    else
      return "不可"
    end
  end
end
