class En
    PI = 3.141592
    def initialize(r)
        @r = r
    end
    def menseki
        @r * @r * PI
    end
end

en = En.new(10)
puts en.menseki
puts En::PI

En::PI = 3.14 #警告が出力される
puts En::PI