-- ウィンドウ関数：RANKを使った例
SELECT
    title,
    price,
    publish,
    RANK() OVER (
        PARTITION BY publish
        ORDER BY price DESC
    ) AS 'ランキング'
FROM
    books
;

-- RANKでPARTITIONを外した例
SELECT
    title,
    price,
    publish,
    RANK() OVER (
        ORDER BY price DESC
    ) AS 'ランキング'
FROM
    books
;

-- 様々なRANK()関数を使った例
SELECT
    title,
    price,
    publish,
    RANK() OVER (ORDER BY price DESC) AS 'RANK',
    DENSE_RANK() OVER (ORDER BY price DESC) AS 'DENSE_RANK',
    ROW_NUMBER() OVER (ORDER BY price DESC) AS 'ROW_NUMBER'
FROM
    books
;

-- ウィンドウ関数：SUMを使った例
SELECT
    title,
    price,
    publish,
    SUM(price) OVER (ORDER BY price DESC) AS '累計'
FROM
    books
;

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

-- FOLLOWINGを使った例
SELECT
    title,
    price,
    publish,
    SUM(price) OVER (ORDER BY price DESC) AS '累計',
    AVG(price) OVER (ORDER BY price DESC
                      ROWS BETWEEN 1 PRECEDING AND 1 FOLLOWING) AS '移動平均'
FROM
    books
;

-- ランキングを順番に出力
SELECT
    title,
    price,
    publish,
    RANK() OVER (
        PARTITION BY publish
        ORDER BY price DESC
    ) AS 'ランキング'
FROM
    books
ORDER BY
    'ランキング'
;