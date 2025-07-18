# 月データ記録クラス
class MonthData
  attr_reader :month, :daydata, :total_length, :total_hours, :total_minutes, :total_seconds
  def initialize(month, *daydata)
    @month = month
    @daydata = daydata
    total
  end
  def total
    @total_length = @total_hours = @total_minutes = @total_seconds = 0
    daydata.each do |day|
      @total_seconds += day.hours * 3600 + day.minutes * 60 + day.seconds
      @total_length += day.length
    end
    @total_hours = @total_seconds / 3600
    @total_minutes = (@total_seconds % 3600) / 60
    @total_seconds = @total_seconds % 60
  end
end
# 日付データと時速の記録クラス
class DayData
  attr_reader :day, :length, :hours, :minutes, :seconds
  def initialize(day,length,hours,minutes,seconds)
    @day,@length,@hours,@minutes,@seconds = day,length,hours,minutes,seconds
  end
  def jisoku
    @length / (@hours * 3600 + @minutes * 60 + @seconds).to_f * 3600
  end
end

m = MonthData.new(6,DayData.new("1",10.5,1,2,30),
  DayData.new("2",10.0,0,59,45),DayData.new("3",12.8,1,30,10))
puts "#{m.month}月"
puts "日\t距離\t時間\t時速"

m.daydata.each do |d1|
  puts "#{d1.day}\t#{d1.length}\t#{d1.hours}:#{d1.minutes}:#{d1.seconds}\t#{d1.jisoku}"
end

m.total
print "合計\t#{m.total_length}\t#{m.total_hours}:"
print "#{m.total_minutes}:#{m.total_seconds}\t"
print "#{m.total_length / (m.total_hours * 3600 + m.total)}"