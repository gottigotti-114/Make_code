SELECT
 status AS 'ステータス名',
 COUNT(status) AS 'ステータス数'
FROM
 orders
WHERE
 user_id > 50
GROUP BY
 status
HAVING
 COUNT(status) > 30
ORDER BY
 COUNT(status) DESC
;