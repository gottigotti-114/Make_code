class Chouhoukei
    def self.makeSeihoukei(hen)
        Chouhoukei.new(hen,hen)
    end
    def initialize(tate,yoko)
        @tate,@yoko = tate,yoko
    end
    def menseki
        @tate * @yoko
    end
end
c = Chouhoukei.new(10,20)
puts c.menseki

s = Chouhoukei.makeSeihoukei(30)
puts s.menseki

p = Chouhoukei.makeSeihoukei(20)

puts p.menseki