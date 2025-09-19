class Resheets
    attr_accessor :house_name, :records, :soukei

    def initialize(house_name,records)
        @house_name,@records = house_name,records

        @soukei = Items.new("総計",0,0,0,0)
        @records.each do |record|
            soukei.before_cnt += record.before_cnt
            soukei.in_cnt += record.in_cnt
            soukei.out_cnt += record.out_cnt
            soukei.trash += record.trash
        end
    end
end             
