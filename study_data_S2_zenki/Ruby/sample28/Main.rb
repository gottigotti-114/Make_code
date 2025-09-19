loop do
  str = gets.chomp

  if /ab{3}c/ =~ str
    puts "マッチ１"
  end
  if /x[yz]|a[bc]/ =~ str
    puts "マッチ２"
  end

  if /\w/ =~str
    puts "マッチ4"
  end

  if /\W/ =~ str
    puts "マッチ5"
  end

  if /\d/ =~ str
    puts "マッチ6"
  end

  if /\D/ =~ str
    puts "マッチ7"
  end

  if /\s/ =~ str
    puts "マッチ8"
  end

  if /\n/ =~ str
    puts "マッチ9"
  end
end