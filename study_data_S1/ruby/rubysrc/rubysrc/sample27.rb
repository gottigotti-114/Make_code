#totalの初期値設定
total = 0
begin
    print "値を入力："
    suti = gets.to_i
    total += suti 
end while(suti != 0)    #入力した数値が0になるまで後置処理

#入力した数値の総計を表示
print "合計は",total