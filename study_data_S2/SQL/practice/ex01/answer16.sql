SELECT
    name,
    answer1,
    answer2
FROM
    quest
WHERE
    age > (
        SELECT
            AVG(age)
        FROM
            quest
    )
ORDER BY
    answer1 ASC
;