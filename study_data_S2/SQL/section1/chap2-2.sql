SELECT
    p.p_name,
    SUM(o.quantity),
    SUM(p.price * o.quantity)
FROM
    order_desc AS o
   RIGHT JOIN
    product AS p
ON
    p.p_id = o.p_id
GROUP BY
    p.p_id,
    p.p_name
ORDER BY
    SUM(p.price * o.quantity) DESC
;

-- マスタープラクティス
-- 1
SELECT
    u.l_name,
    u.f_name,
    COUNT(r.id)
FROM
    rental AS r
   LEFT JOIN
    usr AS u
ON
    u.user_id = r.user_id
GROUP BY
    r.user_id
ORDER BY
    COUNT(r.user_id) DESC
;

-- 2
SELECT
    d.depart_id,
    d.depart_name
FROM
    depart AS d
    LEFT JOIN
    employee AS e
ON
    e.depart_id = d.depart_id
WHERE
    e.depart_id IS NULL
;

-- 3
SELECT
    b.title,
    b.isbn,
    COUNT(r.isbn)
FROM
    books AS b
   LEFT JOIN
    rental AS r
ON
    b.isbn = r.isbn
GROUP BY
    b.isbn
ORDER BY
    COUNT(r.isbn) DESC
;

-- 4
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