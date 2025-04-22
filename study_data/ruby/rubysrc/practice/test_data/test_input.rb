class Input_test_data
    attr_accessor :question, :bunya, :kaito

    def initialize(question,bunya,kaito)
        @question = question
        @bunya = bunya
        @kaito = kaito
    end

    def input
        File.open("question_data.txt","a") do |file|
            if file.exists?
                file.puts "問題文,分野,解答文"
            end
            
    end

    def now_bunya

    end
end


puts "問題文の入力"
qestion = gets.chomp
puts "分野の入力"
data.now_bunya
bunya = gets.chomp
puts "解答文の入力"
kaito = gets.chomp

data = Input_test_data.new(question,bunya,kaito)
