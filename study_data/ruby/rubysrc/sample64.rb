class Sokudo
    attr_accessor :kyori, :jikan
    def jisoku
        @kyori / @jikan
    end
end

s = Sokudo.new

print "走行距離："
s.kyori = gets.to_i
print "走行時間："
s.jikan = gets.to_i
puts "#{s.kyori}kmを#{s.jikan}時間で走ると平均時速は#{s.jisoku}km/hです"