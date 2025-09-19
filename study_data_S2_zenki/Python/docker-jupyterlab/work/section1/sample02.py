#リストの作成
fruits = ["apple","banana","cherry"]

#タプル（変更不可リスト）
nums = (35.68,139.76)

#辞書（シンボラー型配列：キーと値のペア）
user = {"name": "秀伍", "age": 25}

#集合（ユニークな要素のみ）=> 重複した値を排除する
unique_numbers = {1,2,3,3,3,4}

#ユニークな要素列に追加と削除
unique_numbers.add(5) #5を追加
unique_numbers.remove(3) #2を削除
print(unique_numbers) 

#辞書の参照
print(user["name"])

#ユニークな配列の集合演算
a = {1,2,3}
b = {3,4,5}

print("aとbの積は", a & b)
print("aとbの和は", a | b)
print("aとbの差は", a - b)

