# フォームで取り入れたデータをMySQLのデータベースに挿入するPHPプログラム

### [1.mysqliとは](#mysqliとは)
### [2.エラー処理](#エラー文)
### [3.プリペアドステートメントとは](#プリペアドステートメント)
### [4.SQLの実行](#sqlの実行)
### [5.接続の閉じ方](#mysqlの接続終了)



## mysqliとは
### PHPでMySQLデータベースと連携するための拡張機能API
※略称「MySQL Improved」

    プリペアドステートメントのサポート

    プリペアドステートメント
    SQLインジェクション対策、パフォーマンスの向上を目的として、あらかじめSQLの構造を準備し、後から挿入する。(後から挿入することで、不正を先に検知する)

### mysqliの準備(インスタンス変数を準備)
```php
//connはconnection(接続)の略
$conn = new mysqli($servername,$username, $password, $dbname);
```
```例文```
```php
$conn = new mysqli('localhost','root','password','testdb');
```

## エラー文
### SQLエラーを入手した際の構文
これは$conn変数にオブジェクトがあり、そのオブジェクトの一つであるconnect_errorである。connect_errorにエラーメッセージが入っている。
```php
//dieは強制終了かつエラーメッセージを表示
if($conn -> connect_error) {
  die("接続失敗：" . $conn->connect_error);
}
```

## プリペアドステートメント
### インジェクション対策、パフォーマンス向上を目的として、あらかじめSQLの構造を準備し、後から動的に挿入すること

### 1.SQL文をあらかじめ作る
### 2.プリペアステートメントの作成

    作成したsql文が入った変数を引数とする

### 3.プレースホルダーに入れるデータを決める。

    "ss"は挿入する文$name,$favoriteの文字型を決める。ssはStringStringのこと

```php
//(1)
$sql = "INSERT INTO favorites (name, favorite_food) VALUES (?, ?)";
//(2)
$stmt = $conn->prepare($sql);
//(3)
$stmt -> bind_param("ss",$name, $favorite);
```

## SQLの実行
execute()はSQLを実行するための$stmtのメソッドである。
```php
if($stmt->execute()) {
  echo "データを正常に挿入しました！";
}else{
  echo "データの挿入に失敗しました...エラー：" . $conn->error;
}
```

## MySQLの接続終了
### MySQLのデータベースと接続を切るには
※ステートメントを閉じないと、開いたままだとメモリリークの原因になる。
```php
$conn->close(); //データベースと接続を切る
$stmt->close(); //ステートメントを閉じる
```

## この章で気づいたこと
### 全角スペースの取り扱いに注意
コメント//と、;の間に全角スペースがあると、エラーが発生することが分かった。これは全角スペースがPHPでは不可視文字(PHP内では特殊文字として扱われている)だったためである。
```php
$stmt->bind_param("ss",$name,$favorite); //コメント
```
