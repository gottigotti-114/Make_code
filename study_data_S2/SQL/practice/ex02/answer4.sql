SELECT
    depart_id,
    COUNT(*) AS '—«‚Ìl”'
FROM
    employee
WHERE
    sex = 2
GROUP BY
    depart_id
HAVING
    COUNT(*) >= 3
;