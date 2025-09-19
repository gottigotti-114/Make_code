# データのフィルタリング

import pandas as pd

df = pd.read_csv("./data/data1.csv")
# 体重が60以上の生き物データを抽出
filtered_df = df[df["体重"] >= 60]

# 出力
print(filtered_df)

print ("------------------------")


df2 = pd.read_csv("./data/data2.csv")

# BMIを生成
df2["BMI"] = df2["体重"] / ((df2["身長"] / 100.0) ** 2)

# BMIが異常な人だけ表示
filtered_df2 = df2[(df2["BMI"] < 18.5) | (df2["BMI"] >= 25.0)]

# BMIを小数点第二位で四捨五入
filtered_df2["BMI"] = round(filtered_df2["BMI"],1)

# 出力
print(filtered_df2.to_csv(sep="\t", index=False)) # タブで区切って表示

