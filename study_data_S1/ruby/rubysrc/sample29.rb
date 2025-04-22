#キーボードから値を入力
print "値を入力："
suti = gets.to_i

1.upto(suti) do |cnt|       #この時点でcnt = 1 cnt <= sutiの間繰り返すが成立するので初期化がいらない
    print cnt,"："
    cnt.times do
        print "*"
    end
    puts
end

