module Hantei
  def rank_method(val)
    ranks = 1

    Kokugo.class_variable_get(:@@points).each do |p|
      # 順位を１から順に決める
      i = 0
      
      if p > val
        ranks += 1
      end
    end

    return ranks
  end
  module_function :rank_method
end

# クラスの作成
class Kokugo
  include Hantei

  attr_accessor :name, :ten

  # 点数を格納する配列
  @@points = []
  # コンストラクタ
  def initialize(name,ten)
    @name, @ten = name,ten
    @@points << ten
  end

  # メソッド
  def hyoka
    case @ten
    when 80..100
      return "優"
    when 70..80
      return "良"
    when 60..70
      return "可"
    else
      return "不可"
    end
  end

  def rank(p)
    rank_method(p)
  end

  protected
  def points
    @@points
  end
end

d = [
  Kokugo.new("有田",100),
  Kokugo.new("池田",70),
  Kokugo.new("上田",100),
  Kokugo.new("江田",60),
  Kokugo.new("尾田",100)
]

while true
  print "名前："
  n = gets.chomp
  if n == ""
    break
  end

  print "点："
  r = gets.to_i

  d << Kokugo.new(n,r)
end

d.each do |data|
  puts "#{data.name}\t#{data.ten}\t#{data.hyoka}\t#{data.rank(data.ten)}"
end