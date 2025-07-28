class Zukei
  def initialize(length)
    @length = length
  end

  def menseki
    raise NotImplementedError, "mensekiメソッドを実装してください"
  end
end

class Shikakukei < Zukei
  def initialize(*args)
    begin
      @tate,@yoko,@takasa = args
      raise ArgumentError, "引数を再設定してください" if @yoko.nil?
    rescue => e
      puts "エラー発生：#{e.backtrace}\n発生クラス：#{self.class}"
    end
  end

  def menseki
    @tate * @yoko
  end

  def taiseki
    begin
      return @tate * @yoko * @takasa
    rescue TypeError
      raise TypeError, "高さを指定してください"
    end
  end
end

shi = Shikakukei.new(2,4)

puts shi.menseki