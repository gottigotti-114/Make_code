SELECT
    answer1,
    answer2
FROM
    quest
WHERE
    answer2 IS NOT NULL AND answer2 <> ''
ORDER BY
    answer1 DESC
;

-- マスタープラクティス
    -- 問一
        SELECT
            title,
            price
        FROM
            books
        WHERE
            price BETWEEN 2500 AND 3500
        ORDER BY
            price ASC
        ;
    -- 問二
        SELECT
            l_name,
            f_name,
            prefecture
        FROM
            usr
        WHERE
            prefecture IN("東京都","千葉県","神奈川県")
        ORDER BY
            l_name_kana ASC,
            f_name_kana ASC
        ;
    -- 問三
        SELECT
            *
        FROM
            rental
        WHERE
            rental_date < '2012-12-01'
        ORDER BY
            rental_date ASC
        ;
    -- 問四
        SELECT
            *
        FROM
            access_log
        WHERE
            access_date >= '2013-01-01' AND access_Date <= '2013-01-31'
        ORDER BY
            referer DESC,
            ip_address DESC
        ;
    -- 問四の改
        SELECT
            *
        FROM
            access_log
        WHERE
            access_date >= '2013-01-01' AND access_Date <= '2013-01-31'
        ORDER BY
            3 DESC,
            4 DESC
        ;
