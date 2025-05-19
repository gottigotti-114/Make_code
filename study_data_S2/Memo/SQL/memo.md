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
