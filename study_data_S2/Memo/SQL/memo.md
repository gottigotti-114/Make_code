# SQLのメモ
- ### [publishについて](##publish)

## CHAPTER 1

## publish
publish IN ('検索値１','検索地２') AND price >= 3000
はpriceが3000以上のフィールド名publishの検索地はどのレコード化探す
```Bash
SELECT
    isbn,
    title,
    price
FROM
    books
WHERE
    publish IN ('日経BP','翔泳社') 
AND
    price >= 3000
;
```

## ORDER BY
### ソート条件を指定する
※ORDER BYは一番最後に処理される

```SQL
ORDER BY
    answer1 ASC
 | ソートキー | 並び順 |
```
ASC ... 昇順
DESC... 降順

ORDER BYは , を使って第二キーを設定できる
```SQL
ORDER BY
    answer1 ASC,
    answer2 DESC
```

### 数字を使ってフィールドを指定する
※フィールドは１から始まる
```SQL
ORDER BY
    4 DESC;
```

## LIMIT
### 特定のレコードのみを抽出する


## AVG()などの関数を使ってみる
### グループごとに平均を求める
```SQL
SELECT
    publish,
    AVG(price)
FROM
    books
GROUP BY
    publish
;
```

## SELECTの所に書いてもいいもの
### NG
- グループ内で共通ではないタイトル
理由は集計したときにどのタイトルを表示すればいいかわからなくなるから
### OK
- グループ化キーに指定した列(共通タイトル)
- 集計関数
- 定数

## GROUP BYでグループの中をさらにグループ化
```SQL
GROUP BY
    publish,
    title
```
このようにしてグループの中をtitleというグループに再度分けることができる

## AVGのポイント
### AVG(タイトル)がダメな理由
AVG(タイトル)はそのタイトルのフィールド列にNULLがあったときに、数えられない仕組みになっているから

## 関数を使った処理
```sql
SELECT
    -- 文字をくっつける関数CONCAT
    CONCAT('ISBN',isbn) AS 'ISBNコード',
    title AS '書名',
    DATE_FORMAT(publish_date, '%Y年%m月%d日') AS '刊行日'
FROM
    books
;
```


## GROUP BYの後にHAVING
### FROM -> WHERE -> GROUP BY -> HAVING -> SELECTの順で実行される

### HAVINGは、GROUP BYで持ってきた値から条件を絞り込む
この構文はanswer1を平均してprefectureでグループ化した中で、平均値が２未満のものだけ取り出す
```sql
SELECT
    AVG(answer1) AS '評価平均'
FROM
    quest
GROUP BY
    prefecture
HAVING
    AVG(answer1) < 2
;
```

## CASE文
```SQL
SELECT 
    referer,
    COUNT(*) AS 'カウント数',
    CASE
        WHEN COUNT(*) >= 50 THEN 'A',
        WHEN COUNT(*) >= 10 THEN 'B',
        ELSE 'C'
    END AS 'ランク'
FROM
    access_log
GROUP BY
    referer
;
```

## CASEをSELECT以外で
CASE文をHAVINGで使うこともある。
```sql
HAVING COUNT(*) = SUM(CASE WHEN check_flag = '完了'...)
```

## データベースの掟
- ### 「UNIQUE制約（他のデータと重複してはいけない）」
主キーは重複してはダメであり、名前なども重複しているとエラーになる。

        やるなら
        太郎１
        太郎２
        みたいな？

- ### 「非NULL制約（NULLであってはいけない）」

## カラムの分割
### データの意味が壊れないほど分解したほうが良い
### 例１「氏名 -> 苗字と名前」
### 例２「県 -> 県と町と所在地」

### なぜ分ける？
ＳＱＬはくっつけるのは簡単だが、分解するのは難しいから

## 非正規系の問題点
        商品名１
        どっさりカイロ
        もっさりカイロ

### このような場合があったとき、どっさりカイロが本物なのか、もっさりカイロが本物なのか分からなくなってしまい、エラーになる。

## 第一正規化
### 注文番号、商品番号を加えることで、商品名や単価や購入数を特定できる

![第一正規系の形](./ドキュメント/images/スクリーンショット%202025-05-20%20132716.png)

## 第二正規化
### テーブルを分割することで、どっさりカイロ、もっさりカイロ現象がなくなる

![第二正規系の形](./ドキュメント/images/スクリーンショット%202025-05-20%20133631.png)

## 正規化まとめ
### 正規化は分割することが多いので、第二正規化にもどすことがある。

```sql
FROM
    employee AS e   -- ここはemployeeとdepartをくっつけてる
   INNER JOIN　-- eやdを使って名前を省略している
    depart AS d
ON
    e.depart_id = d.depart_id
    -- ここでキーを結び付けいている
```

### 例
![INNERJOINで結合](./ドキュメント/images/スクリーンショット%202025-05-20%20140158.png)
### ここでretiredまでがemployeeでそこから右側がdepartになる

## フィールドの取得
```sql
SELECT
    e.l_name,
    e.f_name,
    d.depart_name,
    e.class
FROM
    employee AS e INNER JOIN depart AS d
ON
    e.depart_id = d.depart_id
WHERE
-- 役職がなかった場合は1となる
    e.retired <> 1
ORDER BY
    e.depart_id ASC,
    e.s_id ASC;
;
```

## 外部結合
```sql
SELECT
    CONCAT(e.l_name,e.f_name),
    AVG(t.work_time)
FROM
    employee AS e
    LEFT JOIN
    time_card AS t
ON
    e.s_id = t.s_id
GROUP BY
    e.s_id
ORDER BY
    AVG(t.work_time) DESC
;
```
### イメージとしては->フィールド名1,2とフィールド名3をくっつける
```
+------------------------------------------+
フィールド名1 | フィールド名2 | フィールド名3 |
+------------------------------------------+
xxxxxxxxx    |xxxxxxxxxxxx  | xxxxxxxxx    |
xxxxxxxxx    |xxxxxxxxxxxx  | xxxxxxxxx    |
xxxxxxxxx    |xxxxxxxxxxxx  | NULL         |
xxxxxxxxx    |xxxxxxxxxxxx  | NULL         |
+------------------------------------------+
```
### RIGHT JOINは右側のテーブルを基準にして左側のテーブルに右側のフィールドのデータがなかったら、NULLとなる
### LEFT JOINは上の左側バージョン

## OUTER JOINについて
### INNER JOINは論理積で考える -> NULLがどちらかにあれば表示しない
### OUTER JOINは論理和で考える -> NULLがどちらかにあっても必ず表示する

## 同一テーブル内のデータを結合する
### 以下のようなものを作れば、リスト構造ができる
```sql
SELECT
    *
FROM
    contents AS cc
   INNER JOIN  
    contents AS cn
ON
    -- ここで同じテーブル内のidを交じ合わせる
    cc.next_id = cn.c_id
;
```
![イメージ](./ドキュメント/images/スクリーンショット%202025-06-02%20191444.png)
## 同一テーブルを三つ結合
### ()の中が最初の結合、その次に()の外の設定で結合することで三つ結合が可能
```sql
SELECT
    b.title,
    a.name,
    b.publish_date
FROM
    (
        books AS b
       INNER JOIN
        author_books AS ab
    ON
        b.isbn = ab.isbn
    )
   INNER JOIN
    author AS a
ON
    ab.author_id = a.author_id
WHERE
    b.publish = '日経BP'
ORDER BY
    b.publish_date DESC
;
```
### 赤色がひとつめの結合
### 黄色が二つ目の結合
![上記のプログラムの見方](./ドキュメント/images/スクリーンショット%202025-06-02%20201405.png)

## サブクエリ
### 二つのクエリを同時に実行する
```sql
SELECT
    name,
    age,
    answer1,
    answer2
FROM
    quest
WHERE
-- ここで毎回、新鮮な平均年齢を得ることができる -> 直接書く手間が省ける
    age > (SELECT AVG(age)
            FROM quest)
ORDER BY
    answer1 ASC
;
```

## NOT INについて
### NOT IN演算子は、IN演算子の反対である。
```
IN(a,b,c) ... この中に、指定したものがあるか？
NOT IN(a,b,c) ... この中の、指定したものではないか？
```
![イメージ](./ドキュメント/images/スクリーンショット%202025-06-04%20121159.png)
### 以下のテーブルからサブクエリで抽出し、持ってくるイメージ
![いめーじ](./ドキュメント/images/スクリーンショット%202025-06-04%20121737.png)

## NOT EXISTS()について
### NOT EXISTS()はEXISTSの反対で、存在していたらFalseになる。もしも存在していなかったらTrueとなり、実行される
### ※書き方の注意：NOT EXISTSはサブクエリの結果がFalseだったらTrueになるのでWHERE NOT EXISTSという風に、書かないといけない
```sql
SELECT
    l_name,
    f_name
FROM
    usr
WHERE NOT EXISTS ( -- 以下のクエリを実行して、rentalテーブルにuser_idが存在していなかったら取り出す
    SELECT
        *
    FROM
        rental
    WHERE
        rental.user_id = usr.user_id
);
```
## CREATE VIEWについて
### CREATE VIEWでメソッドのように呼び出しが行うことができる
```sql
CREATE VIEW
    view_sales
AS
    SELECT
        s_id
    FROM
        sales
    WHERE
        s_date = '2012-12'
;

SELECT * FROM view_sales;
```

## UNION句
### 二つのクエリの結果を純粋に結合する -> INNER JOINのもっと分かりやすいバージョン
```sql
SELECT
    u.l_name_kana,
    u.f_name_kana,
    'a'
FROM
    usr AS u
UNION --上のクエリと下のクエリをそのまま横に結合して表示
SELECT
    e.l_name_kana,
    e.f_name_kana
    e.sex
FROM
    employee AS e
ORDER BY 1,2
```

### UNION ALLについて

    UNION ALLとは、重複したデータも全て表示する機能である

## 差集合と和集合 -> バージョンで動かないやつがたくさんある
### EXCEPT演算子 -> 差集合
### INTERSECT演算子 -> 積集合

## 挿入クエリ
### そのテーブルの基準のフィールドの順に指定する
```sql
INSERT INTO
    usr
VALUES(
    'A200507',
    '鈴木',
    '徳次郎',
    'スズキ',
    'トクジロウ',
    '群馬県',
    '群馬市北町',
    '1-1-1',
    '040-999-9999',
    NULL
)
```
### フィールドを最初から指定して挿入
```sql
INSERT INTO usr (
    user_id, --ここでどのフィールドに挿入するか決める
    l_name,
    f_name,
    l_name_kana,
    f_name_kana,
    tel
)
VALUES
(
    'B200507', --ここで上の指定したフィールドにこのデータを入れる
    '神田',
    '愛',
    'カンダ',
    'アイ',
    '040-888-8888'
)
```
#### ※ここで指定しなかったフィールドにNULLを入れていいか、確認してから行う

## INSERTとSELECTクエリを混ぜる
### SELECTクエリで取り出した値を、usrテーブルに追記する
```sql
INSERT INTO usr (user_id, l_name, f_name, email)
SELECT
    s_id,
    l_name,
    f_name,
    'admin@wings.msn.to'
FROM
    employee
WHERE
    last_update >= '2012-01-01'
;
```

## UPDATE命令
### 値の変更を加えることができる
```sql
-- booksテーブルのpriceフィールドのデータをすべて1.05倍する
UPDATE
    books
SET
    price = price * 1.05
;
```

### 条件を指定したレコードを更新する
```sql
-- idが3のデータを変更
UPDATE
    quest
SET
    answer1 = 3,
    answer2 = ' ',
    answered = NOW()
WHERE
    id = 3
;
```

## DELETEクエリ
### 指定したレコードを削除する
```sql
-- s_dateが2012-11以下のレコードを消す
DELETE FROM
    sales
WHERE
    s_date <= '2012-11'
;
```

## トランザクション処理
### リクエストが二つ来た時に片方を処理して、その次にもう片方を処理するような処理

```sql
-- トランザクション開始
BEGIN;

-- データの追加
INSERT INTO books(isbn, title)
VALUES('4-0010-000X','SQL入門2');

-- booksテーブルの確認
SELECT
    isbn,
    title
FROM
    books
;
```

### ここでのトランザクション処理の説明
```
トランザクションを開始する ... BEGIN;
以下のトランザクションを同時に実行する ... データの追加,booksテーブルの確認

クエリの実行後にROLLBACKコマンドでロールバックし、なかったことにする
```

## ロールバック
### すべての変更を取り消しにする
### ロールバックが使えるのは、上にBEGIN;と書いてあるファイルだけ
```bash
# 直前のクエリ（更新や削除）をなかったことにする
ROLLBACK;
```

## テーブル作成クエリの作り方
```sql
CREATE TABLE
    quest
    (
        id INT AUTO_INCREMENT, -- AUTO_INCREMENTでオート版バー型にできる
        name VARCHAR(100) NOT NULL, -- VARCHARで何文字までか指定
        name_kana VARCHAR(255) NOT NULL, -- NOT NULLでNULLの格納を禁止する
        sex VARCHAR(5) NOT NULL,
        prefecture VARCHAR(10) NOT NULL,
        age INT DEFAULT 0,
        answer1 INT NULL,
        answer2 TEXT NULL,
        aswered DATETIME NOT NULL,
        PRIMARY KEY (id) -- ここで主キーは何かを設定する
    )
;
```
```主キーの別の書き方```
```sql
id INT AUTO_INCREMENT PRIMARY KEY --最初から一行目に着けておく
```

## テーブルの消し方
### DROPコマンドでテーブルを削除できる
```sql
DROP TABLE テーブル名;
```

## 情報の出力
### データベース一覧を表示
```sql
SHOW DATABASES;
```
### テーブル一覧を表示
```sql
SHOW TABLES;
```
### そのテーブルのフィールドと必要情報を一覧表示する
```sql
SHOW COLUMNS FROM テーブル名;
```

## インデックス
### 検索効率を向上させるための仕組み
### 主キーを基準にするのではなく、データとなるフィールドの名前や日付を降順や昇順にすることによって、フルスキャンせずにレコードを検索することができる
```sql
CREATE INDEX
    pub_date --publish_dateが主キーになるように変更をかけたインデックスと、publish_dateが主キーになるように変更をかけた二つのインデックスが作られる。
ON
    books
    (
        publish, 
        publish_date
    )
;
```

### どんな仕組みなのか？
```sql
SELECT
    *
FROM
    books
WHERE
    publish = '翔泳社'　--ここではpublishが翔泳社になっているので->
;

-- 翔泳社が検索されるとき、主キー（isbn）をもとに、検索がかけられている。しかし、上のCREATE INDEXでインデックスを作成しておくことで、publishを主キーとするテーブルが裏に作成され、そのテーブルを上のSELECTクエリが認識して扱う。その際に、直接publishを主キーとしているので、元のbooksテーブルを使うよりも早くなる
```

### どんなインデックスが裏に存在しているのか確認する方法
```sql
SHOW INDEX FROM テーブル名
```

### インデックスが使われないとき（自動認識される）
- ### IS NULL, IS NOT NULL, <>, LIKEなどの演算子を使うとき
- ### インデックス列に対して演算をしている
        ```sql
        -- これはあり、右側で演算を行えば通る
        price < 3000 * 1.05
        ```
- ### 複合インデックスの場合。そしてインデックス列がWHERE文で対象となっていない場合。

## ALTER テーブル
### テーブルを変更更新してくれる機能。主に既存のテーブルにフィールドを追加したいときに使う。デフォルトはNULL
```sql
ALTER TABLE            --ここで対象となるテーブル指定
    quest
ADD                    --どんなフィールドを追加するか
    last_update DATETIME -- DATETIMEはデータ型
AFTER                  --どのフィールドの後ろに追加するか指定
    answered
;
```

### AFTERのところについて
#### AFTERの部分でもし一番手前にフィールドを作りたい場合、FIRSTを使う
```sql
ADD
    last_update DATETIME
FIRST
;
```

### テーブルも消すことができる
```sql
ALTER TABLE
    quest
DROP -- ageフィールドを削除することができる
    age
;
```

## 特定の列の制約条件を変更
### 文字数の制限などの設定を変更する
#### SQLiteでは制約条件の変更をすることができないため、最初から作り直さないといけない
```sql
ALTER TABLE
    usr
MODIFY
    o_address VARCHAR(255) NULL --o_addressはもともとVARCHAR(100)だった
;
```
```実行前```

![実行前](./ドキュメント/images/スクリーンショット%202025-06-24%20102234.png)

```実行後```

![実行後](./ドキュメント/images/スクリーンショット%202025-06-24%20102501.png)

### フィールドの名前を変更する
```sql
ALTER TABLE
    old_name --ここで今までの既存のテーブル名
RENAME AS
    new_name --新しく名前変更するテーブル名
;
```

<hr>
<hr>

#  **ここから応用編**

<hr>
<hr>

## ウィンドウ関数（別名:OLAP関数）
### データベースを使ってリアルタイムデータ分析を行う処理のこと
### 例えば、市場分析、財務諸表作成、マネジメント計画作成など、ビジネスの現場でなくてはならないものである
```sql
<ウィンドウ関数>OVER (
    [PARTITION BY <列リスト>]
    OVER BY <ソート用列リスト> <ASCかDESCか>
)
```
```例文```
```sql
-- 順位付け関数を使った例
SELECT
    title,
    price,
    publish,
    RANK() OVER (
        PARTITION BY publish --publish列をグループ化する
        ORDER BY price DESC --そのグループでpriceの順位(DESC:降順)をつける
    ) AS 'ランキング'
FROM
    books
;
```
#### ※PARTITION BYがなかった場合、すべてのレコードを基準にランキングを付ける

## 順位付けの方法３選
- ### RANK()
    ### RANKで出力すれば、データが重複しても順位が一緒になる。そして、5位→7位など重複したレコード分順位を飛ばす
- ### DENSE_RANK()
    ### DENSE_RANKで出力すれば、データが重複しても順位が一緒になる。5位→7位などと順位は飛ばされずに、そのまま順位付けをする
- ### ROW_NUMBER()
    ### ROW_NUMBERで出力すれば、データが重複したら自動的に順位がつけられる。

### ※ウィンドウ関数はSELECT句以外では使わないようにしよう


![RANK付け](./ドキュメント/images/スクリーンショット%202025-06-25%20113446.png)

## 累計の方法
- ### SUM()
    ### SUM(フィールド)で出力すれば、指定したフィールドを集計する
```sql
SELECT
    title,
    price,
    publish,
    -- SUMでは引数を渡してあげないといけない。price
    SUM(price) OVER (ORDER BY price DESC) AS '累計'
FROM
    books
;
```

## PRECEDINGを使って、直近の3行分の平均値を出す
### ここ最近の調子的なものを把握するのに便利
```sql
-- AVGを使った集計と、PRECEDINGを使った例
SELECT
    title,
    price,
    publish,
    SUM(price) OVER (ORDER BY price DESC) AS '累計',
    AVG(price) OVER (ORDER BY price DESC
                      ROWS 2 PRECEDING) AS '現在の平均'
FROM
    books
;
```
![PRECEDINGの仕組み](./ドキュメント/images/スクリーンショット%202025-06-25%20115430.png)
### FOLLOWINGを利用する
#### 自分より一つ前、自分、自分より一つ先を集計対象とする
```sql
-- FOLLOWINGを使った例
SELECT
    title,
    price,
    publish,
    SUM(price) OVER (ORDER BY price DESC) AS '累計',
    AVG(price) OVER (ORDER BY price DESC
                      ROWS BETWEEN 1 PRECEDING AND 1 FOLLOWING) AS '移動平均'
    -- ROWS BETWEEN ここから PRECEDING AND ここまで FOLLOWINGみたいな書き方で、ここから～ここまでの平均をとる。BETWEENがカレントレコードからどこまで前か、FOLLOWINGがカレントレコードからどこまで先かを表している
FROM
    books
;
```


## ウィンドウ関数一覧
- ### 集約関数(SUM, AVG, COUNT, MAX, MIN)など
- ### RANK, DENSE_RANK, ROW_NUMBERなど

## ユーザの追加
### hogeというユーザを作成
```sql
-- hogeというユーザをパスワード「abcdefg」で作成する
CREATE USER hoge IDENTIFIED BY 'abcdefg';
```
### ユーザの一覧を表示するには
```sql
SELECT
    User
FROM
    mysql.user
;
```
### 権限を与える
```sql
-- workbookから始まるテーブルへのSELECT権限を与えることができる
GRANT SELECT ON workbook.* TO hoge;
```

### 権限を削除
```sql
REVOKE SELECT ON workbook.* FROM hoge;
```

### アカウントを削除
```sql
DROP USER hoge;
```

## MySQLの認証方式について
### 今までmysql_native_passwordという認証方式を使っていた。
### 認証方式とは・パスワードの認証方式をどのようにするのか？
- ### caching_sha2_passwordは、MySQL8.0のデフォルトの認証方式
- ### mysql_native_passwordは、古い方式。セキュリティが低く、MySQL8.4からは禁止されている
```sql
-- ユーザにどの認証方式を使ってもらうかを指定する方法
-- これは中でハッシュ化して保存されているからおすすめ
CREATE USER hoge IDENTIFIED WITH caching_sha2_password BY 'abcdefg'
```

## パスワードに有効期限を設定する
### hogeアカウントのパスワードの有効期限を90日に設定
```sql
ALTER USER hoge PASSWORD EXPIRE INTERVAL 90 DAY;
```
### hogeアカウントのパスワードを無期限に設定
```sql
ALTER USER hoge PASSWORD EXPIRE NEVER;
```
### 強制的にパスワードを期限切れにする
```sql
ALTER USER hoge PASSWORD EXPIRE;
```

## ロールについて
### ロールとは、ユーザの設定が含まれたユーザのようなもの。イメージするといえば、いろんな初期設定がされている初期スキンみたいなもの
```sql
CREATE ROLE app_user; --app_userというロールを作成
GRANT SELECT ON workbook.* TO app_user; --ロールにworkbook系のselect権限を付与する
GRANT INSERT ON workbook.books TO app_user; -- ロールにbooksの挿入権限を付与する
CREATE ROLE app_dev; -- app_devというロールを作成する
GRANT ALL ON workbook.* TO app_dev; -- workbookの全ての権限(パーミッション)をapp_devに付与する

-- user1にapp_userロールの設定を着させてあげる
GRANT app_user TO user1;

-- app_userの設定されたロールを有効化する
SET ROLE app_user;

-- app_userに設定されたロールを無効にし、
SET ROLE app_dev;

-- ロールを完全に無効化する
SET ROLE NONE;
```

