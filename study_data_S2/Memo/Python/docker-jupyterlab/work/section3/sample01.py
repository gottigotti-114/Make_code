# 簡単なAIモデル
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score

# データセットのロード
data = load_iris()
X = data.data
y = data.target

# データセットの分割
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# モデルの作成
model = RandomForestClassifier()
model.fit(X_train, y_train)

# 予測と評価
predictions = model.predict(X_test)
print("Accuracy:", accuracy_score(y_test, predictions))
