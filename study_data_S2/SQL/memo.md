# SQLのメモ

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

