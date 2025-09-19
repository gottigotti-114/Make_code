class Item
    attr_reader :name,:price

    def initialize(name,price)
        @name,@price = name,price
    end
end