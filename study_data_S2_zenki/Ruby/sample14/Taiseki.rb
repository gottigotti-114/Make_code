# このクラスに高さを追加して
# 体積を求めるクラスを作成しなさい

class Taiseki
    attr_accessor :menseki, :takasa

    def initialize(zukei,takasa)
        @zukei,@tak = zukei,takasa
    end

    def taiseki
        @zukei.menseki * @tak
    end
end
###################################
# calc = Taiseki.new(5,6)
# puts calc.taiseki