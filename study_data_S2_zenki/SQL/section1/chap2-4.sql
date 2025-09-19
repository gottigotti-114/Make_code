SELECT
    b.title,
    a.name,
    b.publish_date
FROM
    (
        books AS b
       INNER JOIN
        author_books AS ab
    ON
        b.isbn = ab.isbn
    )
   INNER JOIN
    author AS a
ON
    ab.author_id = a.author_id
WHERE
    b.publish = '日経BP'
ORDER BY
    b.publish_date DESC
;

-- マスタープラクティス
-- 問一
SELECT
    d.depart_name AS '所属部署名',
    CONCAT(e.l_name,e.f_name) AS '社員氏名',
    t.work_time AS '勤務時間'
FROM
    (
        employee AS e
       INNER JOIN
        depart AS d
    ON
        e.depart_id = d.depart_id
    )
   INNER JOIN
    time_card AS t
ON
    e.s_id = t.s_id
WHERE
    e.s_id = 'DA00001'
    AND
    t.r_date BETWEEN '2012-12-01' AND '2012-12-31'
ORDER BY
    t.r_date ASC
;

SELECT
    *
FROM
    employee AS e
   INNER JOIN
    depart AS d
ON
    e.depart_id = d.depart_id
;

-- 問二
SELECT
    cp.c_title AS '前コンテンツ名',
    cc.c_title AS '現コンテンツ名',
    cn.c_title AS '次コンテンツ名'
FROM
    (
        contents AS cp
       INNER JOIN
        contents AS cc
    ON
        cp.next_id = cc.c_id

    )
   INNER JOIN
    contents AS cn
ON
    cc.next_id = cn.c_id
ORDER BY
    cc.c_id ASC
;

-- 問三
SELECT
    om.delivery_date AS '発注日',
    od.po_id AS '注文コード',
    CONCAT(us.l_name,us.f_name) AS '利用者氏名',
    pr.p_name AS '商品名',
    pr.price AS '商品単価',
    od.quantity AS '購入数'
FROM
    (
        (   
            order_main AS om
            INNER JOIN
            order_desc AS od
        ON
            om.po_id = od.po_id
        )
       INNER JOIN
        usr AS us
    ON
        om.user_id = us.user_id
    )
   INNER JOIN
    product AS pr
ON
    od.p_id = pr.p_id
WHERE
    om.delivery_date IS NULL
ORDER BY
    om.delivery_date ASC,
    od.po_id ASC,
    od.p_id ASC

;