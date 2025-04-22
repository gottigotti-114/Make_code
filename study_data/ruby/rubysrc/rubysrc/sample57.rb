class animal
    def initialize(name,animal)
        @name = name
        @animal = animal
    end

    def speak
        puts @name,"は",@animal,"です"
    end
end

dog = animal.new(dog,animal)
car = animal.new(nissan,car)

dog.speak
car.speak