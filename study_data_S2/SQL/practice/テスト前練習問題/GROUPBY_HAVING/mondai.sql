-- 1
-- Shohinテーブルに登録されている商品について
-- 商品分類ごとの商品数を調べるSQLを作成してください
-- 表示する列は「商品分類」「商品分類ごとの商品数」とし、列の別名もつけてください

SELECT
    shohin_bunrui AS '商品分類',
    COUNT(shohin_bunrui) AS '商品分類ごとの商品数'
FROM
    Shohin
GROUP BY
    shohin_bunrui
;

-- 2 
-- 上で出した結果の中から「商品分類ごとの商品数」が「2」の商品分類を出力してください
SELECT
    shohin_bunrui AS '商品分類',
    COUNT(shohin_bunrui) AS '商品分類ごとの商品数'
FROM
    Shohin
GROUP BY
    shohin_bunrui
HAVING
    COUNT(shohin_bunrui) = 2
;