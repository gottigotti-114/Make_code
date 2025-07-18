SELECT
    u.l_name AS '',
    u.f_name AS '–¼',
    COUNT(o.user_id) AS 'ƒ†[ƒU[‚²‚Æ‚Ì’•¶‰ñ”'
FROM
    usr AS u
   INNER JOIN
    order_main AS o
ON
    u.user_id = o.user_id
GROUP BY
    u.user_id
;