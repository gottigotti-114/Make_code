# [5,0,test]を代入し
# 10で割ったときの結果を表示
# 出力例
#     5...2
#     0...ゼロで割りました(ZeroDivisionError) ※例外クラス名
#     test...数値以外で割りました。(TypeError)

begin
    arr = [1,2]
    puts arr[0]
    puts arr[1]
    puts arr[2]
rescue ZeroDivisionError 
    puts "0で割りました"
rescue TypeError 
    puts "数値以外での演算"
rescue IndexError
    puts "配列外指定"
end
