# 以下のクラスを作成しなさい
# 円の面積を求めるクラス
# クラス名：Er
# プロパティ：r
# メソッド：menseki
require "./Taiseki"
class En
    include Math
    attr_accessor :r

    def initialize(r)
        @r = r
    end

    def menseki
        PI * @r * @r
    end

end

###########################
# calc = Er.new

# calc.menseki