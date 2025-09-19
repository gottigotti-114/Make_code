#catch :a do
#  print "a>"
#  a = gets.chomp
#  catch :b do
#    print "b>"
#    b = gets.chomp
#    catch :c do
#      print "c>"
#      c = gets.chomp

#      if a == "a"
#        throw :a
#      elsif b == "b"
#        throw :b
#      elsif c == "c"
#        throw :c
#      end
#    end
#  end
#end

class InputError < StandardError
end

begin
  print "引数１>>"
  num1 = gets.to_i
  raise InputError if num1 <= 0
rescue InputError
  puts "数値エラー発生"
  retry
end

begin
  print "引数２>>"
  num2 = gets.to_i
  raise InputError if num2 <= 0
rescue InputError
  puts "数値エラー発生"
  retry
end

puts "引数1 + 引数2 = #{num1 + num2}"
