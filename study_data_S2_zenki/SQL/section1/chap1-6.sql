-- ANDを使った抽出
-- SELECT
--     isbn,
--     title,
--     price
-- FROM
--     books
-- WHERE
--     publish IN ('日経 BP','翔泳社')
-- AND
--     price >= 3000
-- ;

-- 演算処理で左から順に演算されているのでpublish = '日経BP' OR publish = '翔泳社'が先に評価される
-- SELECT
--     isbn,
--     title,
--     price
-- FROM
--     books
-- WHERE
--     publish = '日経BP' OR publish = '翔泳社' AND price >= 3000
-- ;

/*マスタープラクティス
    -- 問一
    SELECT
        *
    FROM
        quest
    WHERE
        sex = '女' AND age >= 20 AND age < 30
        /*WHRE sex = '女' AND age BETWEEN 20 AND 29;でもオッケー*/
    ;

    -- 問二
    SELECT
        l_name,
        f_name,
        email
    FROM
        usr
    WHERE
        prefecture = '東京都' AND email LIKE 'examples.com*'
    ;

    -- 問三
    SELECT
        answer2
    FROM
        quest
    WHERE
        NOT answer2 IS NULL AND answer2 <> ''
    ;
    /* answer2 <> '' のみでNULLを判定にかけたとき、trueでもfalseでもない、よくわからない(unknown)という値が出てくる*/

    -- 問四
    SELECT
        *
    FROM
        employee
    WHERE
        l_name = '山田' AND f_name = '奈美'
    ;

    -- 問五
    SELECT
        isbn,
        title
    FROM
        books
    WHERE
        (publish = '秀和システム' OR publish = '日経BP') AND price < 3000
    ;
*/

