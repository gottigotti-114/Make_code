SELECT
    *,
    RANK() OVER (
        ORDER BY price DESC
    ) AS '’l’i‚Ì‡ˆÊ'
FROM
    books
;