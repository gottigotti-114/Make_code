UPDATE
    books
SET
    category_id = 'Z9999'
WHERE
    category_id
NOT IN(
    SELECT
        category_id
    FROM
        category
)
;

-- マスタープラクティス
-- 問一
UPDATE
    employee
SET
    depart_id = 'Z99'
WHERE
    depart_id
NOT IN (
    SELECT
        depart_id
    FROM
        depart
)
;

-- 問二
UPDATE
    employee
SET
    depart_id = 'Z99'
WHERE
    NOT EXISTS
    (
        SELECT
            *
        FROM
            depart
        WHERE
            employee.depart_id = depart.depart_id
    )
;

-- 問三
UPDATE
    books
SET
    title = 
    CONCAT(
        title ,
        (
            SELECT
                category_name
            FROM
                category
            WHERE
                books.category_id = category.category_id
        )
    )
;

-- 問四
UPDATE
    books
SET
    category_id = 'XXXXX'
WHERE
    isbn
IN (
    SELECT
        isbn
    FROM
        rental
    WHERE
        returned = '9'
);