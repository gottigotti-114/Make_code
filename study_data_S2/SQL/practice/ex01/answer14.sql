SELECT
    u.l_name,
    u.f_name,
    COUNT(r.user_id) AS 'ë›èoêî'
FROM
    usr AS u
   LEFT JOIN
    rental AS r
   ON
    u.user_id = r.user_id
GROUP BY
    u.user_id
    u.l_name,
    u.f_name
ORDER BY
    COUNT(r.user_id) DESC
;

-- SELECT
--     u.l_name,
--     u.f_name,
--     r.returned
-- FROM
--     usr AS u LEFT JOIN rental AS r
-- ON
--     u.user_id = r.user_id
-- ;