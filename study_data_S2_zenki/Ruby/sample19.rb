class Name
    def initialize(name)
        @name = name
    end
    def return_name(obj = self)
        obj.name
    end
    def return_protected_name(obj = self)
        obj.name
    end
    protected
    def name
        @name
    end
end

n = Name.new("坂根")
n1 = Name.new("陽介")
puts "return_name"
puts n.return_protected_name
puts "protected_name"

#この場合、引数なしの場合(obj = self)を実行するのでこのやり方はおｋ
puts n.return_protected_name(n1)