class Name
    def initialize(name)
        @name = name
    end

    def return_name
        @name
    end

    private
    def name
        @name
    end
end

n = Name.new("坂根")
# puts n.name #これはエラーが出る

puts n.return_name #これはエラーが出ない