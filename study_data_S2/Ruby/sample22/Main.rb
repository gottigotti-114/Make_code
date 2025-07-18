class Shikaku
  def initialize(tate,yoko)
    @tate, @yoko = tate, yoko
  end
  def menseki
    @tate * @yoko
  end
end
shikaku = Shikaku.new(10,20)
sankaku = Shikaku.new(10,20)

def sankaku.menseki
  @tate * @yoko / 2
end

puts shikaku.menseki
puts sankaku.menseki