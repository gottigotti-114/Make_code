DELETE FROM
    sales
WHERE
    s_date <= '2012-11'
;

-- マスタープラクティス

-- 問１
DELETE FROM
    rental
WHERE
    rental_date <= '2011-12-31'
;

-- 問２
DELETE FROM
    access_log
WHERE
    access_date < '2012-06-01'
    OR
    referer IS NULL
;

-- 問３
DELETE FROM
    employee
WHERE
    retired = '1'
    AND
    last_update <= '2007-03-31'
;

-- 問４
DELETE FROM
    books
WHERE
    category_id = 'Z9999'
    OR
    category_id IS NULL
;
