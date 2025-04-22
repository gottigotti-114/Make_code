#関数：合計金額の計算（引数：金額,消費税分の金額）
def f_goukei(kingaku,shouhizei)
    kingaku + shouhizei     #関数の中で最後に来た一行がreturnを有する場合、returnと書かなくてもよい
end

#関数：金額の計算（引数：単価,数量）
def f_kingaku(price,count)
    price * count
end

#関数：消費税の計算（引数：金額）
def f_shouhizei(kingaku)
    (kingaku *= 0.1).to_i  #端数処理
end

#値の代入
price = 100
count = 5

kingaku = f_kingaku(price,count)
shouhizei = f_shouhizei(kingaku)
goukei = f_goukei(kingaku,shouhizei)

#結果の出力
puts "単　価：#{price}"
puts "数　量：#{count}"
puts "金　額：#{kingaku}"
puts "消費税：#{shouhizei}"
puts "合　計：#{goukei}"