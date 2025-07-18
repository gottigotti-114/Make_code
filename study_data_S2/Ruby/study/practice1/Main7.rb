
1.upto(9) do |i|
  1.upto(9) do |j|
    seki = i*j
    if !(seki % 16)
      next
    end
    if seki > 55
      break
    end
    print "#{seki} "
  end
  puts
end
