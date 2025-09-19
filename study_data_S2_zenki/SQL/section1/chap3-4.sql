UPDATE
    books
SET
    price = price * 1.05
;

-- マスタープラクティス
-- 問一
UPDATE
    books
SET
    isbn = CONCAT("ISBN",isbn),
    price = price * 0.9
;