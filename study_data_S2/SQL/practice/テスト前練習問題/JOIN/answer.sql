-- 1
-- TenpoShohinテーブルとShohinテーブルを内部結合してください
-- 表示する列はすべての列とします
SELECT *
  FROM TenpoShohin AS ts INNER JOIN Shohin AS s
                         ON ts.shohin_id = s.shohin_id;

-- 2 
-- Shohinテーブルに登録されている商品の中には
-- 店舗で取り扱われていない秘蔵の商品がいくつかあります
-- 店舗では取り扱われていない商品をしらべてください
SELECT *
  FROM TenpoShohin AS ts RIGHT JOIN Shohin AS s
                         ON ts.shohin_id = s.shohin_id
 WHERE ts.shohin_id IS NULL;

-- [別解]
SELECT *
  FROM Shohin
 WHERE NOT EXISTS (SELECT *
                     FROM TenpoShohin
                    WHERE Shohin.shohin_id = TenpoShohin.shohin_id);

SELECT *
  FROM Shohin
 WHERE shohin_id NOT IN (SELECT shohin_id
                           FROM TenpoShohin);

-- 3
-- Shohinテーブル、TenpoShohinテーブル、ZaikoShohinテーブルの
-- ３つのテーブルを内部結合してください
-- 表示する列はすべての列として
-- ZaikoShohinテーブルのsouko_id列をもとに
-- 倉庫１（ID: S001）に保管されている商品に絞り込んでください

SELECT *
  FROM ((Shohin AS s INNER JOIN TenpoShohin AS ts
                   ON s.shohin_id = ts.shohin_id) INNER JOIN ZaikoShohin AS zs
                                                  ON s.shohin_id = zs.shohin_id)
 WHERE zs.souko_id = "S001";