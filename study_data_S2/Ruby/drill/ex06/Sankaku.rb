require "./Shikakukei"

class Sankaku < Shikakukei #->これはダメ。なぜならis-a関係になっていないから
    def menseki
        super / 2
    end
end

##############################
rect = Sankaku.new(4,5)
puts rect.menseki