BEGIN;

SELECT
    isbn
FROM
    rental
GROUP BY
    isbn
;

DELETE FROM
    books
WHERE
    isbn
    NOT IN (
        SELECT
            isbn
        FROM
            rental
        GROUP BY
            isbn
    )
;

-- マスタープラクティス
-- 問１
DELETE FROM
    employee
WHERE
    depart_id
    NOT IN (
        SELECT
            depart_id
        FROM
            depart
    )
;

-- 問２
DELETE FROM
    employee
WHERE
    NOT EXISTS (
        SELECT
            depart.depart_id
        FROM
            depart
        WHERE
            employee.depart_id = depart.depart_id
    )
;

-- 問３
DELETE FROM
    sales
WHERE
    s_id
    NOT IN (
        SELECT
            s_id
        FROM
            shop
    )
;
-- 問４
DELETE FROM
    books
WHERE
    isbn
    IN (
        SELECT
            isbn
        FROM
            rental
        WHERE
            returned = '9'
    )
;

