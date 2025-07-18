class Resirt
    attr_accessor :number, :records

    def initialize(number,records)
        @number = number
        @records = records
    end

    def total
        total = 0
        @records.each do |record|
            total += record.total
        end
        return total
    end

    def zei
        self.total * 0.1
    end

end

    
    