# 四角形の面積を求めるクラス
# クラス名：shikakukei
# プロパティ：tate,yoko
# メソッド：menseki
require "./Shikakukei"
class Shikakukei
    attr_accessor :tate, :yoko

    def initialize(tate,yoko,takasa=1)
        @tate,@yoko = tate,yoko
        @takasa = takasa
    end

    def menseki
        @tate * @yoko
    end

    def taiseki
        calc = Taiseki.new(self,@takasa)
        calc.taiseki
    end

end

##################################
# calc = Shikakukei.new(5,6)
# ans = calc.menseki

# puts ans