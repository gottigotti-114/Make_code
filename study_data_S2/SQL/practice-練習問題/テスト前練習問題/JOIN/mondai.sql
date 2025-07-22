-- 1
-- TenpoShohinテーブルとShohinテーブルを内部結合してください
-- 表示する列はすべての列とします
SELECT
    *
FROM
    TenpoShohin AS t
    LEFT JOIN
    Shohin AS s
ON
    t.shohin_id = s.shohin_id
;


-- 2 
-- Shohinテーブルに登録されている商品の中には
-- 店舗で取り扱われていない秘蔵の商品がいくつかあります
-- 店舗では取り扱われていない商品をしらべてください
SELECT
    shohin_id
FROM
    Shohin AS s
WHERE
    s.shohin_id NOT IN (
        SELECT
            shohin_id
        FROM
            TenpoShohin
    )
;
-- 3
-- Shohinテーブル、TenpoShohinテーブル、ZaikoShohinテーブルの
-- ３つのテーブルを内部結合してください
-- 表示する列はすべての列として
-- ZaikoShohinテーブルのsouko_id列をもとに
-- 倉庫１（ID: S001）に保管されている商品に絞り込んでください
SELECT
    *
FROM
    Shohin AS s
    INNER JOIN
    
ON
    s.shohin_id = t.shohin_id
