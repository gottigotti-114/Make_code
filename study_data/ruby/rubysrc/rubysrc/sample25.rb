#1mmの髪を半分ずつ追っていったとき、何回目で富士山の頂上にたどり着くか計算してみる

#メートルからミリ単位に変更する
mtomm = 10 * 100
mountain_length = 3776 * mtomm

#紙を折っていく(富士山を超えるまでループ)
cnt = 0
total_height = 1
while total_height <= mountain_length
    cnt += 1
    total_height *= 2
end

#折った回数を表示
print "回数：",cnt,"高さ：",total_height