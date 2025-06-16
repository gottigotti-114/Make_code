# クラスメソッドとスタティックメソッド

class Monster:
  cnt = 0

  #コンストラクタ
  def __init__(self,name,hp,atk):
    self.name = name
    self.hp = hp
    self.atk = atk
    Monster.count()
  
  #攻撃の設定
  def attack(self,things):
    things.hp -= self.atk
    print(f"{self.name}が{things.name}に{self.atk}ダメージ当てた！")

  @classmethod
  #カウンターを追加
  def count(cls):
    cls.cnt += 1

  @staticmethod
  #クラスの設定情報を表示
  def setting():
    print("名前、HP、攻撃力を設定")
    print("メソッドについて\n攻撃モーション：attack\nクラスメソッド：出現カウンター記録：count")

m1 = Monster("おばけ",100,14)
m2 = Monster("スケルトン",130,25)

# クラスの詳細情報表示
m2.setting()

# m2をm1に攻撃させる
m2.attack(m1)

# 出現カウンターを表示
print(m2.cnt)