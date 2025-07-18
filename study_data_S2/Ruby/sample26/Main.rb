# 一般の計算モジュール
module Ippan
  class Shouhin
    attr_reader :name, :tanka, :suryo
    def initialize(name,tanka,suryo)
      @name = name
      @tanka = tanka
      @suryo = suryo
    end

    def shoukei
      @tanka * @suryo
    end

    def zei
      shoukei * 0.1
    end

    def total
      (shoukei + zei).to_i
    end

  end
end

# 軽減税率用クラス
module Keigen
  class Shouhin
    attr_reader :name, :tanka, :suryo
    def initialize(name,tanka,suryo)
      @name = name
      @tanka = tanka
      @suryo = suryo
    end

    def shoukei
      @tanka * @suryo
    end

    def zei
      shoukei * 0.1
    end

    def total
      (shoukei + zei).to_i
    end

  end
end

# 名前空間の書き方
arr = [
  Ippan::Shouhin.new("ペン",100,10),
  Ippan::Shouhin.new("鉛筆",80,5),
  Keigen::Shouhin.new("トマト",100,5)
]

arr.each do |s|
  puts "#{s.name}\t#{s.tanka}\t#{s.suryo}\t#{s.shoukei}\t#{s.total}"
end