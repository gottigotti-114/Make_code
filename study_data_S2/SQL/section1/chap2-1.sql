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

-- マスタープラクティス
-- 1
SELECT
    CONCAT(e.l_name, e.f_name) AS '氏名',
    t.work_time AS '勤務時間'
FROM
    employee AS e
    INNER JOIN
    time_card AS t
ON
    e.s_id = t.s_id
WHERE
    t.r_date BETWEEN '2012-12-01' AND '2012-12-31'
ORDER BY
    e.s_id ASC,
    t.r_date ASC
;

-- 2
SELECT
    sh.s_name,
    sl.s_value    
FROM
    shop AS sh
    INNER JOIN
    sales AS sl
ON
    sl.s_id = sh.s_id
WHERE
    sl.s_date = '2012-12'
ORDER BY
    sl.s_value DESC
;

-- 3
SELECT
    sh.s_name,
    SUM(sl.s_value)
FROM
    shop AS sh
    INNER JOIN
    sales AS sl
ON
    sh.s_id = sl.s_id
GROUP BY
    sl.s_id
HAVING
    sl.s_date LIKE '2012*'
ORDER BY
    sl.s_value ASC
;

