module Keisan
    def shishagonyu(atai)
        ((atai * 10) + 0.5).to_i / 10.0
    end
    module_function :shishagonyu
end
class Menseki
    def menseki
    end
end
class Shikaku < Menseki
    def
        initialize(tate,yoko)
        @tate,@yoko = tate,yoko
    end
    def menseki
        @tate * @yoko
    end
end
class En < Menseki
    include Keisan
    def initialize(r)
       @r = r
    end
    def menseki
       shishagonyu(@r * @r * Math::PI)
    end
end
s = Shikaku.new(10,20)
e = En.new(10)
p s.menseki
p e.menseki