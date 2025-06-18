# 顧客ごとに平均値をグループ化した値ごとに求める

import pandas as pd

df = pd.read_csv("./data/Person2.csv")

# Ageをグループ化してHeightを統計して平均値を求める
print(df.groupby("Age")["Height"].mean())

print(df["Age"].mean())

print(df["Age"].quantile(0.25))