# 小数点モジュール
module Keisan
  def kirisute(num,point)
    point -= 1
    helper = 1.0
    point.times do
      helper /= 10
      num *= 10
    end
    num = num.to_i
    point.times do
      num /= 10.0
    end
    num -= num % helper if num % helper != 0
    num
  end
end

class Items
  include Keisan
  attr_reader :name, :kotosi, :zennen

  def initialize(name,kotosi,zennen)
    @name, @kotosi, @zennen = name, kotosi, zennen
  end

  def hi
    kotosi = @kotosi.to_f
    zennen = @zennen.to_f
    hi = 0
    if kotosi >= zennen
      hi = ((kotosi / zennen) * 100) - 100
    else
      hi = (100 - ((kotosi / zennen) * 100)) * -1
    end
      kirisute(hi,3)
  end
  # 出力用
  def out
    return "#{@kotosi}\t#{@zennen}\t#{self.hi}"
  end
end

class Sies
  attr_reader :si, :items

  def initialize(si,items)
    @si, @items = si, items
    @items << total
  end

  def total
    kotosi = 0
    zennen = 0
    items.each do |i|
      kotosi += i.kotosi
      zennen += i.zennen
    end
    return Items.new("合計",kotosi,zennen)
  end
end

class Prefecture
  attr_reader :ken, :sies

  def initialize(ken,sies)
    @ken,@sies = ken,sies
    @sies << total

    # 注意点: 合計レコードで、Siesクラスが合計をさらに合計して配列に刻んでしまうため、合計フィールドの後ろ側(合計フィールドの合計)を削除
    @sies[-1].items.pop
  end

  def total
    arr = []
    @sies[0].items.each do |i|
      name = ""
      kotosi = 0
      zennen = 0
      @sies.each do |s|
        s.items.each do |si|
          if si.name == i.name
            kotosi += si.kotosi
            zennen += si.zennen
          end
        end
      end
      arr << Items.new(i.name,kotosi,zennen)
    end
    Sies.new("合計",arr)
  end

  def printer
    # 最初のカラム名
    puts @ken
    print "\t"
    @sies[0].items.each do |i|
      print "#{i.name}\t\t\t"
    end
    puts
    # 具体的なカラム名
    print "県名\t"
    @sies[0].items.each do
      print "今年\t前年\t前年比\t"
    end
    puts

    # 具体的な数値
    @sies.each do |s|
      print "#{s.si}\t"
      s.items.each do |i|
        print "#{i.kotosi}\t#{i.zennen}\t#{i.hi}%\t"
      end
      puts
    end
  end
        
private
  def rows(si)
    arr = [si.name]
    si.items.each do |i|
      arr << i.kotosi
      arr << i.zennen
      arr << i.hi
    end
    arr
  end
end

class Prefectures
  attr_reader :prefectures

  def initialize(prefectures)
    @prefectures = prefectures
  end

  def total
    arr = []
    @prefectures[0].sies[0].items.each do |i|
      kotosi = 0
      zennen = 0
      @prefectures.each do |pr|
        pr.sies[-1].items.each do |i2|
          if i.name == i2.name
            kotosi += i2.kotosi
            zennen += i2.zennen
          end
        end
      end
      arr << Items.new(i.name,kotosi,zennen)
    end
    Sies.new("総合計",arr)
  end

  def printer
    @prefectures.each do |pr|
      pr.printer
      puts
    end

    print "#{self.total.si}\t"
    self.total.items.each do |t|
      print "#{t.kotosi}\t#{t.zennen}\t#{t.hi}%\t"
    end
  end
end
  
#===================================
# モジュールテスト
#include Keisan
#puts Keisan::kirisute(0.3653,3)
#===================================
# Itemクラステスト
#i = Item.new("みかん",1000,1500)
#puts "#{i.name}"
#puts "今年\t前年\t前年比率"
#puts "#{i.kotosi}\t#{i.zennen}\t#{i.hi}%"
#===================================
## Siesクラステスト
#sies = Sies.new(
#  "出雲市",[
#    Items.new("みかん",1000,1500),
#    Items.new("ぶどう",2000,1600)
#  ]
#)

## 市の名前
#puts "#{sies.si}"
## 市のアイテム名フィールド
#sies.items.each do |i|
#  print "#{i.name}\t\t\t"
#end
#puts

## Itemsのフィールド名
#sies.items.each do
#  print "今年\t前年\t前年比\t"
#end
#puts
## Itemsの要素
#sies.items.each do |i|
#  print "#{i.kotosi}\t#{i.zennen}\t#{i.hi}\t"
#end

#===================================
## Prefectureクラステスト
#prefecture = Prefecture.new(
#  "島根県",
#  [
#    Sies.new("出雲市",[
#      Items.new("みかん",1000,2000),
#      Items.new("ぶどう",2000,1400)
#    ]),
#    Sies.new("松江市",[
#      Items.new("みかん",1400,1600),
#      Items.new("ぶどう",3000,2500)
#    ])
#  ]
#)

#prefecture.printer
#===================================
# Prefecturesクラステスト
prefectures = Prefectures.new(
  [
    Prefecture.new(
      "島根県",
      [
        Sies.new("出雲市",[
          Items.new("みかん",1000,2000),
          Items.new("ぶどう",2000,1400)
        ]),
        Sies.new("松江市",[
          Items.new("みかん",1400,1600),
          Items.new("ぶどう",3000,2500)
        ])
      ]
    ),
    Prefecture.new(
      "鳥取県",
      [
        Sies.new("鳥取市",[
          Items.new("みかん",1300,1100),
          Items.new("ぶどう",4000,2500)
        ]),
        Sies.new("米子市",[
          Items.new("みかん",3200,3000),
          Items.new("ぶどう",1300,1000)
        ])
      ]
    )
  ]
)

prefectures.printer