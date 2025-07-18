SELECT
    u.l_name_kana,
    u.f_name_kana,
    'a'
FROM
    usr AS u
UNION
SELECT
    e.l_name_kana,
    e.f_name_kana
    e.sex
FROM
    employee AS e
ORDER BY 1,2