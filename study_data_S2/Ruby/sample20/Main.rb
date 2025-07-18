require "./Zukei"
require "./Sankaku"
require "./Shikaku"

zukei = [Sankaku.new(10,20),shi = Shikaku.new(10,20)]

zukei.each do |z|
    puts z.menseki
end

