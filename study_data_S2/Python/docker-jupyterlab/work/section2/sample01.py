# データの取得・読み込み

import pandas as pd

df = pd.read_csv("./data/data1.csv") # CSVファイルの読み込み
print(df.head()) # データの確認

df2 = pd.read_excel("./data/data3.xlsx") # Excelファイルの読み込み
print(df2) # データの確認 -> openpyxlをインストールしていないといけない

