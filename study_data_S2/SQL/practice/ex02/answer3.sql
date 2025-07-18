SELECT
    publish,
    COUNT(*) AS 'o”ÅŽÐ‚²‚Æ‚Ì‘Ð”',
    CASE
        WHEN COUNT(*) = 1 THEN '­‚È‚¢'
        WHEN COUNT(*) = 2 THEN '•’Ê'
        WHEN COUNT(*) >= 3 THEN '‘½‚¢'
    END AS '•]‰¿'
FROM
    books
GROUP BY
    publish
;
