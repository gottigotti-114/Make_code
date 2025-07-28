SELECT
 name,
 prefecture,
ROW_NUMBER() OVER (
 ORDER BY age DESC
) AS '年齢ランキング'
FROM
 users_2
;