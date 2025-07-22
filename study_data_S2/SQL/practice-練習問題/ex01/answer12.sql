SELECT
    author_id AS '’˜ŽÒ',
    COUNT(*) AS '‘Ð”'
FROM
    author_books
GROUP BY
    author_id
HAVING
    COUNT(*) >= 3
;