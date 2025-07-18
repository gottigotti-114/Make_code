SELECT
    l_name,
    f_name,
    last_update
FROM
    employee
ORDER BY
    last_update DESC
LIMIT
    5
;