SELECT
    *
FROM
    contents AS cc
   INNER JOIN  
    contents AS cn
ON
    cc.next_id = cn.c_id
;

SELECT
    cc.c_title,
    cn.c_title
FROM
    contents AS cc
   INNER JOIN  
    contents AS cn
ON
    cc.next_id = cn.c_id
ORDER BY
    cc.c_id ASC
;

-- マスタープラクティス
-- 問一
SELECT
    cp.c_id AS '前のページ',
    cn.c_id AS '現在のぺージ'
FROM
    contents AS cp
   INNER JOIN
    contents AS cn
ON
    cp.c_id = cn.c_id
ORDER BY
    cn.c_id ASC
;

-- 問二
SELECT
    mc.title AS 'メニュー名',
    mn.title AS '親メニュー'
FROM
    menu AS mc
   INNER JOIN
    menu AS mn
ON
    mc.parent = mn.page_id
ORDER BY
    mc.page_id ASC
;

-- 問三
SELECT
    CONCAT(em.l_name,em.f_name) AS '社員氏名',
    CONCAT(eb.l_name,eb.f_name) AS '上司氏名'
FROM
    employee AS em
   LEFT JOIN
    employee AS eb
ON
    em.b_id = eb.s_id
;

-- 問四
SELECT
    cp.c_id AS '前のページ',
    cn.c_id AS '現在のページ'
FROM
    contents AS cp
   INNER JOIN
    contents AS cn
ON
    cp.next_id = cn.c_id
ORDER BY
    cn.c_id ASC
;
