class Shikaku
    def tate(t)
        @tate = t
    end
    def yoko(y)
        @yoko = y
    end
    def menseki
        @tate * @yoko
    end
end

#インスタンスの作成
shi = Shikaku.new

shi.tate(10)
shi.yoko(20)
puts "面積は#{shi.menseki}です"

