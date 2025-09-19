class Car
    @@count = 0
    def initialize
        puts "車を作成しました"
        @@count += 1
    end
    def count
        puts "車を#{@@count}台作りました"
    end
end

c1 = Car.new
c2 = Car.new
Car.count