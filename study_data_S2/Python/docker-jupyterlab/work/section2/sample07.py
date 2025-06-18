import pandas as pd
df = pd.read_csv("./data/Person3.csv")

# ピボットテーブルの作成
# 年齢と性別ごとに体重の平均値を計算
df_table = df.pivot_table(values="Height", index="Age", columns="Gender", aggfunc="mean")

# NaNを0で埋める
print(df_table.fillna(0))
