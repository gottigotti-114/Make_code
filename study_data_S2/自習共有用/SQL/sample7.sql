SELECT
 u.name AS 'ユーザ名',
 p.id AS '商品ID',
 p.name AS '商品名',
 od.price AS '価格',
 SUM(od.price) OVER (PARTITION BY o.user_id) AS '累計'
FROM
(
 (
   users AS u
  LEFT JOIN
   orders AS o
  ON
  o.user_id = u.id
 )
 LEFT JOIN
  order_items AS od
 ON
  o.id = od.order_id
)
INNER JOIN
 products AS p
ON
 od.product_id = p.id
WHERE
 o.user_id <= 3
ORDER BY
 o.user_id ASC
;