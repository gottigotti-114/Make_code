# カプセル化
class Person:
  __age = 19 #カプセル化をする変数は__を事前に着ける

  def __init__(self,name,age):
    self.name = name
    self.__age = age

  def getAge(self):
    return self.__age

human = Person("藤原",19)

print(human.getAge())

## カプセル化した変数にアクセスしてみる
# print(human.__age)