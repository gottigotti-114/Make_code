hash = {
    :sei => "坂根", #hash{:sei => "坂根",:mei => "陽介"}でも可
    :mei => "陽介"
}

hash2 = {
    sei: "坂根",
    mei: "陽介"
}

puts "姓"
puts hash[:sei]
puts "名"
puts hash[:mei]

puts "姓"
puts hash2[:sei]
puts "名"
puts hash2[:mei]