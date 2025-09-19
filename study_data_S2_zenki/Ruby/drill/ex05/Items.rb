class Items
    attr_accessor :name, :before_cnt, :in_cnt, :out_cnt, :trash

    def initialize(name,before_cnt,in_cnt,out_cnt,trash)
        @name,@before_cnt,@in_cnt,@out_cnt,@trash = name,before_cnt,in_cnt,out_cnt,trash
    end

    def cnt
        @cnt = (@before_cnt + @in_cnt) - (@out_cnt + @trash)
    end
end