SELECT
    -- 文字をくっつける関数CONCAT
    CONCAT('ISBN',isbn) AS 'ISBNコード',
    title AS '書名',
    DATE_FORMAT(publish_date, '%Y年%m月%d日') AS '刊行日'
FROM
    books
;

SELECT
    prefecture,
    AVG(answer1) AS '評価平均'
FROM
    quest
GROUP BY
    prefecture
;

