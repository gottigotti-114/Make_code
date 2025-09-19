class NumsToWords
  attr_reader :after, :before
  def initialize(*a)
    
    @before = []
    a.each do |n|
      @before << n
    end
    @after = []
    calc
  end
  def calc
    @before.each do |a|
      @after << hantei(a)
    end
  end
  
private
  def hantei(a)
    words = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
    char = ""
    a.times do |i|
      char = words[i]
    end
    return char
  end
end


