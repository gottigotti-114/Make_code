1.upto(9) do |i|
    1.upto(9) do |j|
        seki = i*j
        print "\s" if seki < 10
        print seki,"\s"
    end
    puts
end

1.upto(9) do |i|
    1.upto(9) do |j|
        seki = i*j
        print "\s" if seki < 10
        print seki,"\s"
        break if seki >= 10
    end
    puts
end

puts "----------------------------"

catch :rest do
    1.upto(9) do |i|
        1.upto(9) do |j|
            seki = i*j
            print " " if seki < 10
            print " ",seki
            throw :rest if seki >= 10
        end
        puts
    end
end
