import pandas as pd

df = pd.read_csv("./data/data1.csv")

# データ型や欠損値の確認
df.info()

# 数値データの統計情報（平均値・最大値など）
print(df.describe()) # ※ここではprintにしないと表示できない