class Uriage_food < Uriage
    Tax = 0.08

    def tax
        (Tax * kingaku).to_i
    end
end
