-- ASはフィールド名を指定する
SELECT
    title AS '書名',
    price * 1.05 AS '税込み価格'
FROM
    books;

-- マスタープラクティス
-- ３
SELECT
    prefecture AS '都道府県名',
    COUNT(*) AS 'ユーザ数'
FROM
    usr
GROUP BY
    prefecture
;

-- ４
SELECT
    publish AS '出版社',
    AVG(price) AS '価格平均'
FROM
    books
GROUP BY
    publish
;

