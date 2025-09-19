# 四角形の面積を求めるクラス
# クラス名：shikakukei
# プロパティ：tate,yoko
# メソッド：menseki

class Shikakukei
    attr_accessor :tate, :yoko

    def initialize(tate,yoko)
        @tate,@yoko = tate,yoko
    end

    def menseki
        @tate * @yoko
    end
end

##################################
# calc = Shikakukei.new(5,6)
# ans = calc.menseki

# puts ans