#変数を定義
num = 2
long_num = 100
name = "藤原"
flag = True

#出力
print(num)
print(long_num)
print(name)
print(flag)

#型を確認する
print(type(num))

#複数出力
print(name, "のナンバー：", num)

#フォーマット指定で出力 -> f""を使って出力する
f_name = "秀伍"
f_age = 19
print(f"{f_name}の年齢は{f_age}である")

#フォーマット指定で出力 -> format()を使って出力
print("{}の年齢は{}である".format(f_name,f_age))

#endで出力を繋げる
print("こんにちは", end=" ")
print("秀伍さん！")

#sepで区切り文字
print("2025","06","03", sep="-")

#別の方法で標準出力を制御
import sys
sys.stdout.write("これも出力できます\n")
