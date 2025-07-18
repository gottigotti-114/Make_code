SELECT
    referer,
    COUNT(*) AS 'カウント数',
    CASE
        WHEN COUNT(*) >= 50 THEN 'A'
        WHEN COUNT(*) >= 10 THEN 'B'
        ELSE 'C'
    END AS 'ランク'
FROM access_log
GROUP BY
    referer
;

-- マスタープラクティス
-- 1
SELECT
    name AS '氏名',
    CASE
        WHEN answer1 = 3 THEN 'ためになった'
        WHEN answer1 = 2 THEN '普通'
        ELSE '役に立たない'
    END AS '評価',
    answer2 AS '感想'
FROM
    quest
ORDER BY
    answered DESC
;

-- 2
SELECT
    isbn,
    COUNT(*) AS '貸出数',
    CASE
        WHEN COUNT(*) >= 10 THEN '好評'
        WHEN COUNT(*) >= 5 AND COUNT(*) <= 10 THEN '普通'
        ELSE '不評'
    END AS '評価'
FROM
    rental
GROUP BY
    isbn
;

-- 3

SELECT
    referer AS 'リンク先',
    COUNT(*) AS 'アクセス数',
    CASE
        WHEN COUNT(*) >= 50 THEN 'A'
        WHEN COUNT(*) >= 10 AND COUNT(*) <= 50 THEN 'B'
        ELSE 'C'
    END AS 'ランク'
FROM
    access_log
GROUP BY
    referer
HAVING
    COUNT(*) >= 3
ORDER BY
    COUNT(*) DESC

;

-- 4
SELECT
    author_id AS '著者ID',
    COUNT(*) AS 'カウント数',
    CASE
        WHEN COUNT(*) >= 4 THEN '多い'
        WHEN COUNT(*) >= 2 AND COUNT(*) <= 4 THEN '普通'
        ELSE '少ない'
    END AS '評価'
FROM
    author_books
GROUP BY
    author_id
;

-- 5
SELECT
    CONCAT(l_name, f_name) AS '社員名',
    CASE
        WHEN class IN ('部長','課長') THEN '管理職'
        WHEN class IN ('主任','担当') THEN '総合職'
        ELSE '一般職'
    END AS '役職クラス'
FROM
    employee
;