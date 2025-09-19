SELECT
    u.user_id AS 'ÉÜÅ[ÉUID',
    COUNT(*) AS 'ë›èoêî'
FROM
    usr AS u
   RIGHT JOIN
    rental AS r
   ON
    u.user_id = r.user_id
GROUP BY
    r.user_id
ORDER BY
    COUNT(*) DESC  


;