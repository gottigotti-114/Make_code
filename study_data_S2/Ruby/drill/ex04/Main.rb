require "./Resirt"
require "./Records"


resheets = [
    Resirt.new(1,[
        Records.new("ペン",100,10),
        Records.new("赤ペン",200,3),
        Records.new("筆箱",400,1)
    ]),
    Resirt.new(2,[
        Records.new("ペン",100,4),
        Records.new("赤ペン",200,3)
    ])
]

resirt_in = []
res_num = 0
File.open("Input.txt","r") do |file|
    i = 0
    data = []
    file.each do |record|
        if i == 0
            res_num = record
            i += 1
            next
        end
        if i != 0
            record.each.strip.split(',') do |d|
                data << d
            end
            resirt_in << Records.new(data[0],data[1],data[2]) 
        end
    end
    resheets << [res_num,resirt_in]
end

resheets.each do |record|
    puts "レシートNO:#{record.number}"
    puts "品名\t単価\t数量\t金額"
    record.records.each do |r|
        puts "#{r.name}\t#{r.price}\t#{r.cnt}\t#{r.total}"
    end
    puts "小計\t\t\t#{record.total}"
    puts "税\t\t\t#{record.zei.to_i}"
    puts "合計\t\t\t#{(record.total + record.zei).to_i}"
    puts
end






































# records1 = [
#     ["ペン",100,10],
#     ["赤ペン",200,3],
#     ["筆箱",400,1]
# ]

# records_arr1 = []
# records1.each do |a|
#     records_arr1 << Records.new(a)
# end

# records2 = [
#     ["ペン",100,4],
#     ["赤ペン",200,3]
# ]

# records_arr2 = []
# records2.each do |b|
#     records_arr2 << Records.new(b)
# end

# datas = []
# datas << Resirt.new(1,records_arr1)
# datas << Resirt.new(2,records_arr2)

# puts "品名\t単価\t数量\t金額"

# records_arr1.each do |i|
#     print "#{i.name}\t#{i.price}\t#{i.cnt}\t#{i.total}\n"
# end

# puts "小計\t\t\t#{data.total}"


