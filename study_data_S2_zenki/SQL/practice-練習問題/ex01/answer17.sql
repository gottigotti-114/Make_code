SELECT
    p.p_id AS '商品コード',
    p.p_name AS '商品名'
FROM
    product AS p
WHERE
    p.p_id NOT IN(
        SELECT DISTINCT
            p_id
        FROM
            order_desc
    )
;