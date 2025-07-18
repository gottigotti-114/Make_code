1.upto(9) do |i|
  1.upto(9) do |j|
    seki = i*j
    break if i == 4
    if !(seki % 4)
      next
    end
    if seki == 30
      next
    end
    if seki > 70
      exit
    end
