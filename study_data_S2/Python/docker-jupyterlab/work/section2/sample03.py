# データのフィルタリング

import pandas as df

df = df.read_csv("./data/data1.csv")
# 体重が60以上の生き物データを抽出
filtered_df = df[df["体重"] >= 60]

# 出力
print(filtered_df)