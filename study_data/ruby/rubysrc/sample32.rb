#九九表の作成
1.upto(9) do |i|
    1.upto(9) do |j|
        seki = i*j
        print " ",seki
        if seki < 10
            print " "
        end
    end
puts
end


#以下のデータを配列に設定し出力しなさい
hairetu = [1,3,5]
hairetu.each do |i|
    puts hairetu[i]
end
#キーボードから数値を入力し、0が入力されるまでループ
#入力されたデータの中から、偶数の和を出力しなさい

sum = 0
begin
    print "値："
    i = gets.to_i
    if i % 2 == 0
        sum += i
    end
end while i != 0

print "合計は",sum