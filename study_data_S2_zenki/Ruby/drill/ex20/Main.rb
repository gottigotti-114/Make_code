# 1.以下の表を出力するために最適なクラスを作成
#   アルバイトの勤務表

#   田中：1000円
#   開始  終了  勤務
#   10:00 12:00 2:30
#   12:30 15:00 2:30

#   合計 4.5  金額 4500円

#   中山：1100円
#   開始  終了  勤務
#   23:00 04:00 5:00
#   23:30 05:00 5:30

#   合計 5.5  金額 6050円

class TimeCard
  attr_reader :start, :finish, :sa
  def initialize(start,finish)
    @start,@finish = start,finish
  end

  def time
    if @finish > @start
      @sa = total_minute(@finish)-total_minute(@start)
    else
      @sa = (total_minute("24:00")-total_minute(@finish)) + total_minute(@start)
    end
    return "#{(@sa / 60).to_i}:#{(@sa % 60).to_i}"
  end
private
  def total_minute(time)
    hour = 0
    minute = 0

    minutes = []
    time.strip.split(':') do |row|
      minutes << row
      hour = minutes[0].to_i 
      minute = minutes[1].to_i
    end
    (hour*60) + minute
  end
end

class Arubito
  attr_reader :name, :money, :times
  def initialize(name,money,times)
    @name,@money,@times = name,money,times
  end

  def total
    total = 0
    @times.each do |t|
      total += t.sa
    end
    
    return (total/60)-(total%0.1)
  end

  def kingaku
    total * @money
  end
end

puts "アルバイトの勤務表"

arr = [
  Arubito.new(
    "田中",
    1000,
    [
      TimeCard.new("10:00","12:00"),
      TimeCard.new("12:30","15:00")
    ]
  ),
  Arubito.new(
    "中山",
    1100,
    [
      TimeCard.new("23:00","04:00"),
      TimeCard.new("23:30","05:00")
    ]
  )
]

arr.each do |human|
  puts "#{human.name}：#{human.money}"
  puts "開始\t終了\t勤務"
  human.times.each do |t|
    puts "#{t.start}\t#{t.finish}\t#{t.time}"
  end
  puts "合計 #{human.total} 金額 #{human.kingaku}"
end