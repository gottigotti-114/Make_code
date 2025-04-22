fruits = {apple: "リンゴ", orange: "みかん", group: "ブドウ"}

fruits.each do |key,val|
    puts "key:#{key}"
    puts "val:#{val}"
end

fruits.each do |val|
    p val
end

