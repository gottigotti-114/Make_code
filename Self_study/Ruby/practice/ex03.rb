# 検索プログラム

class FindOfLine

  # コンストラクタ
  def initialize(text,find,gyo)
    @text,@find,@gyo = text,find,gyo
  end

  # コンストラクタ -> 実行するメソッド
  def match?
    @pattern = Regexp.new("#{@find}")
    if @text =~ @pattern
      return true
    else
      return false
    end
  end
  def find
    check = @pattern.match(@text)
    check.each do |c|
      
  end
