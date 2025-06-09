class Person:
    # クラス変数の定義
    humans = 0

    # コンストラクタ
    def __init__(self, name, age): # Pythonはself.が、インスタンス変数となる
        self.name = name
        self.age = age
        Person.humans += 1

    def printer(self):
        print(f"{self.name}さん{self.age}歳")

    def human(Person):
        print(Person.humans)
# インスタンス作成
pr1 = Person("太郎",25)
pr2 = Person("花子",30)

# 出力
pr1.printer()
pr2.printer()
pr2.human()
