UPDATE
    quest
SET
    answer1 = 3,
    answer2 = ' ',
    answered = NOW()
WHERE
    id = 3
;

-- マスタープラクティス
-- 問１
UPDATE
    books
SET
    publish = 'WINGS出版'
WHERE
    publish = '山田出版'
;

SELECT
    *
FROM
    books
;

-- 問２
UPDATE
    employee
SET
    class = '主任'
    last_update = NOW()
WHERE
    l_name = '山田' AND f_name = '奈美'
;

SELECT
    *
FROM
    employee
;


-- 問３
UPDATE
    books
SET
    price = price * 0.9
WHERE
    publish = '日経BP'
;

SELECT
    *
FROM
    books
;


-- 問４
UPDATE
    rental
SET
    returned = 9
WHERE
    rental_date < '2012-03-31'
;

SELECT
    *
FROM
    rental
;
