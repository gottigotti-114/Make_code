# クラスの継承

class LivingThings:
  def __init__(self,name,birthday):
    self.name = name
    self.birthday = birthday
  
  def display_data(self):
    print(f"名前：{self.name}")
    print(f"誕生日：{self.birthday}")

human1 = LivingThings("藤原","2005-11-04")

human1.display_data()

# ここで継承
class Animal(LivingThings):
  def __init__(self,name,age,birthday):
    super().__init__(name,birthday)
    self.age = age

  def display_data(self):
    super().display_data()
    print(f"年齢：{self.age}")

human2 = Animal("藤原",19,"2005-11-04")
human2.display_data()