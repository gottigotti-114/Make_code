animal = {
    dog: 5,
    panda: 7,
    ox: 3
}

animal.each do |key,value|
    puts "#{key}:#{value}"
end