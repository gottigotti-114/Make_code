catch :finish do
  count = 1
  10.times do |i|
    if i == 8
      throw :finish
    else
      if count % 10 == 0
        redo
      end
      count += i
      puts i
    end
  end
end