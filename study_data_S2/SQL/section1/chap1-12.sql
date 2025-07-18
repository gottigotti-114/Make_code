SELECT
    AVG(answer1) AS '評価平均'
FROM
    quest
GROUP BY
    prefecture
HAVING
    -- この場合、GROUP BYが上にあるので、「上の集計なんだな」ということが分かる
    AVG(answer1) < 2
;

-- エラー文
SELECT
    prefecture,
    AVG(answer1) AS '評価平均'
FROM
    quest
WHERE
    -- この場合、グループ化していないので、何のこと？となる
    AVG(answer1) < 2
GROUP BY
    prefecture
;

-- マスタープラクティス
-- １
SELECT
    prefecture AS '都道府県',
    AVG(age) AS '平均年齢'
FROM
    quest
GROUP BY
    prefecture
HAVING
    AVG(age) >= 35 AND AVG(age) < 50
;

-- ２
