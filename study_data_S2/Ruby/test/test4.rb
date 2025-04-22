class Jikan
    attr_writer :hour, :min, :sec

    def sec
        (@hour * 3600) + (@min * 60) + @sec
    end
end

calc = Jikan.new

print "時間："
calc.hour = gets.to_i

print "分："
calc.min = gets.to_i

print "秒："
calc.sec = gets.to_i

puts "#{calc.sec}秒です"