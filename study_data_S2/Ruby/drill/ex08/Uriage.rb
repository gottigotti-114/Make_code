class Uriage
    Tax = 0.1

    attr_reader :tanka, :cnt, :kingaku, :name
    def initialize(name,tanka,cnt)
        @name,@tanka,@cnt = name,tanka,cnt
    end
    def tax
        (Tax * kingaku).to_i
    end
    def kingaku
        @tanka * @cnt
    end
    def total
        kingaku + tax
    end
end
