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