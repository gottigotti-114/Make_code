def method1(*args)
  name,age,error = args
  begin
    if name.nil? || age.nil? || !error.nil?
      raise ArgumentError
    end
  rescue ArgumentError => e
    return "引数の指定が間違っています"
  else
    return "#{name}は#{age}歳です"
  end
end

puts method1("藤原",19)
