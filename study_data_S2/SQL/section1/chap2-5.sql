-- 回答者の平均年齢を調べる
SELECT AVG(age)
    FROM quest;

-- 調べた平均年齢を使ったSQL
SELECT
    name,
    age,
    answer1,
    answer2
FROM
    quest
WHERE
    age > 33
ORDER BY
    answer1 ASC;
;

-- サブクエリにすると
SELECT
    name,
    age,
    answer1,
    answer2
FROM
    quest
WHERE
    age > (SELECT AVG(age)
            FROM quest)
ORDER BY
    answer1 ASC
;

-- 教科書例題
SELECT
    s_id,
    s_name
FROM   
    shop
WHERE
    s_id NOT IN (
        SELECT
            s_id
        FROM
            sales
        WHERE
            s_date = '2012-12'
    )
;

-- マスタープラクティス
-- 問1
SELECT
    answer1,
    answer2
FROM
    quest
WHERE

;

-- 問２
SELECT
    l_name,
    f_name
FROM
    usr
WHERE NOT EXISTS (
    SELECT
        *
    FROM
        rental
    WHERE
        rental.user_id = usr.user_id
);

-- CREATE VIEW
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

