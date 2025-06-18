# 欠損値のチェックと処理

import pandas as pd

# インスタンス生成
df = pd.read_csv("./data/data2.csv")

# どこに欠損値があるか確認
print("欠損値の量を確認")
print(df.isnull().sum())

print("欠損値の場所を確認")
print(df.isnull())


# 欠損値を0で埋める（簡易的な例）
df_filled = df.fillna(0)

print("欠損値を0で埋めた表を作成")
print(df_filled)

# 欠損のある行を削除
df_dropped = df.dropna()
print("欠損のある行を削除した後")
print(df_dropped)

# どこに欠損値があるか確認
print("どこに欠損値があるか確認")
print(df_dropped.isnull().sum())