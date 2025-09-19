def sum(a)
  if a < 1
    return a
  end
  return a + sum(a-1)
end

puts sum(5)