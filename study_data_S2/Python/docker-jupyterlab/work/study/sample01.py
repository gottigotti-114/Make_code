# pandasの参照
import pandas as pd

# クラス -> いろいろな情報を出力するメソッド集
class NewData:

    # コンストラクタ
    def __init__(self, fileName, pd):
        self.file = fileName
        self.pd = pd
        self.df = self.pd.read_csv(self.file)

        
    def info(self):
        print( self.df )
    
    def info2( self, group, field ):
        df = self.df.groupby(group)[field].sum()
        print(df)

data = NewData("./data/Sales_data.csv",pd)

# 製品(Product)をグループ化して、値段(Price)の集計を求める
data.info2("Product","Price")
