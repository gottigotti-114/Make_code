# pandasの参照
import pandas as pd

# クラス
class NewData:
    def __init__(self, fileName, pd):
        self.file = fileName
        self.df = pd.read_csv(f"{self.file}")
        
    def info(self):
        print( self.df)
    
    def info( self, option ):
