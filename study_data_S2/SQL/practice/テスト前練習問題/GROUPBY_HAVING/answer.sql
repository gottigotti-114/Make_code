-- 1
SELECT shohin_bunrui AS "商品分類",
       COUNT(*) AS "商品分類ごとの商品数"
  FROM Shohin
 GROUP BY shohin_bunrui;

-- 2
SELECT shohin_bunrui AS "商品分類",
       COUNT(*) AS "商品分類ごとの商品数"
  FROM Shohin
 GROUP BY shohin_bunrui
HAVING COUNT(*) = 2;