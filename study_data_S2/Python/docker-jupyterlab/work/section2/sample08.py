import pandas as pd

# 仮のデータを用意
df = pd.DataFrame({
    "date": pd.date_range(start="2025-01-01", periods=100, freq="D"),
    "sales": range(100)
})

# 月ごとの売上合計
monthly_sales = df.resample("M", on="date")["sales"].sum()
print(monthly_sales)
print(df)
