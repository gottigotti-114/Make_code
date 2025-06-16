# クラスの作成
class Person:
    def __init__(self,name):
        self.name = name
    
    def greet(self):
        return f"こんにちは、{self.name}さん"

# インスタンスを作成
person = Person("しゅうご")
print(person.greet())


# メソッドの作成
def greet(name):
    # 名前を受け取り、挨拶を返す
    return f"こんにちは、{name}さん"

print(greet("ふじはら"))

# メソッドの作成2
def item(i):
    return i

print(item("果物"))