-- 平均
SELECT
    AVG(price)
FROM
    books
;

-- 合計
SELECT
    SUM(price)
FROM
    books
;

-- 最大値
SELECT
    MAX(price)
FROM
    books
;

-- 最小値
SELECT
    MIN(price)
FROM
    books
;

-- 数を数える
-- 件数はフィールド名関係なく数えれるから*でもおけ
-- Chap2の結合の際にアスタリスクでは不都合が出てくるので書き分けが必要
SELECT COUNT(price) FROM books;
SELECT
    COUNT(*)
FROM
    books;

SELECT
    publish,
    AVG(price)
FROM
    books
GROUP BY
    publish
;

SELECT publish,COUNT(price)
FROM books
GROUP BY publish;

-- GROUP BYを使うときは、SELECTにかけるものが限定される
-- ↓はOK、それ以外はNG
-- 1.グループ化キーに指定した列
-- 2.集計関数
-- 3.定数

-- マスタープラクティス
    -- 問一
        SELECT
            sex,
            MAX(age),
            MIN(age)
        FROM
            quest
        GROUP BY
            sex
        ;
    -- 問二
        SELECT
            prefecture,
            sex,
            AVG(answer1)
        FROM
            quest
        GROUP BY
            prefecture,
            sex
        ;
    -- 問三
        SELECT
            s_id,
            SUM(s_value)
        FROM
            sales
        GROUP BY
            s_id
        ;
    -- 問四
        SELECT
            publish,
            MAX(price)
        FROM
            books
        GROUP BY
            publish
        ;
    -- 問五
        SELECT
            page_id,
            COUNT(*)
        FROM
            access_log
        GROUP BY
            page_id
        ;
