obj = Object.new

class << obj
  def greet
    puts "hello"
  end
end

module Talkative
  def speak
    puts "I can speak"
  end
end

obj.extend(Talkative)
obj.speak