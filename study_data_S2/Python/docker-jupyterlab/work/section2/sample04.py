# 欠損値のチェックと処理

import pandas as pd

# インスタンス生成
df = pd.read_csv("./data/data2.csv")

# どこに欠損値があるか確認
print(df.isnull().sum())

# 欠損値を0で埋める（簡易的な例）
df_filled = df.fillna(0)

# 欠損のある行を削除
df_dropped = df.dropna()

# どこに欠損値があるか確認
print(df_dropped.isnull().sum())