-- トランザクション開始
BEGIN;

-- データの追加
INSERT INTO books(isbn, title)
VALUES('4-0010-000X','SQL入門2');

-- booksテーブルの確認
SELECT
    isbn,
    title
FROM
    books
;

