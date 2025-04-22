# 問、
# キーボードから3科目の点数を取得
# 合計点と平均点を求めるクラスを作成し、以下のように出力
# 国語：40
# 数学：50
# 英語：61
# 合計：151
# 平均：50.33333333


#def score(koku,su,ei)
#     @kokugo,@sugaku,@eigo = koku,su,ei
# end
# のような書き方でもオッケー
class CalcValue
    #件数のクラス変数
    @@cnt = 0

◆◆◆◆◆◆◆◆◆◆◆◆◆◆

    def sciense=(val)
        @@cnt += 1
        @sciense = val
◆◆◆◆◆◆◆◆◆◆◆◆◆◆


    def kokugo(val)
        @@cnt += 1
        @kokugo = val
    end
    def sugaku(val)
        @@cnt += 1
        @sugaku = val
    end
    def eigo(val)
        @@cnt += 1
        @eigo = val
    end
    def sum
        @total = @kokugo + @eigo + @sugaku
    end
    def ave
        sum / @@cnt
        #なぜ@total / @@cntじゃないのか？
        # ->もし@total / cntのときCalc.sumをしないと@total / cntが実行されず
        # 　@totalに値が代入されず、Calc.aveをしたらデータがおかしくなる
    end
end

#インスタンスの定義
Calc = CalcValue.new

◆◆◆◆◆◆◆◆◆◆◆◆◆◆
print "科学："                  #インスタンス名定義時に def sciense= (引数)のように=を
Calc.sciense = gets.to_i        #つける理由は左のように Calc.sciense = gets.to_iを可能
◆◆◆◆◆◆◆◆◆◆◆◆◆◆    #にするため。この場合、sciense = で一つのメソッド名になる

print "国語："
Calc.kokugo(gets.to_f)
print "数学："
Calc.sugaku(gets.to_f)
print "英語："
Calc.eigo(gets.to_f)
puts "合計：#{Calc.sum}\n平均：#{Calc.ave}"