require "./Items"

items = [
  Items.new("鉛筆",80,5),
  Items.new("トマト",200,5),
  Items.new("ペン",100,3)
]

a = item[1]
def a.zei
  (shoukei * 0.08).to_i
end

items.each do |i|
  puts "#{i.name}\t#{i.price}\t#{i.cnt}\t#{i.shoukei}\t#{i.zei}\t#{i.total}"
end
