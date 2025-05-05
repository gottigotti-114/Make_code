# MySQLのデータベースから指定したテーブルの一覧表を出力する

## SQLの実行->データの取得
### query()メソッドでSQLクエリを実行
query()はPHPのMySQLiの拡張機能であり、SELECT,INSERT,UPDATE,DELETEなどの基本的データベース操作を行うことができる
```php
$result = $conn->query("SELECT * FROM users"); //抽出
$conn->query("INSERT INTO users (name, email) VALUES ('Aさん','A01@gmail.com')"); //挿入
$conn->query("UPDATE users SET email='B01@gmail.com' WHERE name='Aさん'"); //更新
$conn->query("DELETE FROM users WHERE id=1"); //削除
```

### なぜprepare()を使ったのか？
prepare()を使わないと、SQLインジェクション対策がされていない状態でデータベース操作を行ってしまうから

## num_rowsについて
### $result->num_rowsは得られた結果($result)のデータベースが何行あるか返す。

## fetch_assoc()について
### カラム名(フィールド名)をキーにした連想配列を取得
### レコードを一行一行順番に読み取ってくれる
※PHPでいう連想配列：配列名[キー]

