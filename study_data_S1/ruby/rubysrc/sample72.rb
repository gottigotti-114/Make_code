# 以下の問題のクラスを作成
#     正方形の面積を求めるプログラム
#         ただしコンストラクタを使い値をセットし
#         引数が渡されない場合は、一片の長さを10にすること

#         　class名：Seihoukei
#         プロパティ：r
#         メソッド：menseki

#             出力例
#             　sei = Seiseki.new(50)
#             puts sei.menseki        <--2500と表示
#             sei = Seihoukei.new
#             puts sei.menseki        <--100と表示

class Seihoukei
    attr_reader :r

    def initialize(r = 10)
        @r = r
    end

    def menseki
        @r * @r
    end
end

sei = Seihoukei.new(50)
puts sei.menseki
sei = Seihoukei.new
puts sei.menseki