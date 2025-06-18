import pandas as pd
import numpy as np
from sklearn.impute import SimpleImputer

#何をしているのか？
#Aというフィールドに(1,Nan,3,4,NaN)、Bというフィールドに(7,8,NaN,10,11)というデータを入れました。
#このときにNaNが入っているとデータとしてあまり良いものではない。
#なので、NaNとなっている部分に、全体の平均値を入れて、まるでしっかりとしたデータのように見せかけるテクニック


# サンプルデータ
df = pd.DataFrame({'A': [1, np.nan, 3, 4, np.nan], 'B': [7, 8, np.nan, 10, 11]})
print(df)

# 平均値で補完
imputer = SimpleImputer(strategy='mean')
df_filled = pd.DataFrame(imputer.fit_transform(df), columns=df.columns)

# 端数処理をする
df_filled["A"] = round(df_filled["A"],1)
df_filled["B"] = round(df_filled["B"],1)

print(df_filled)