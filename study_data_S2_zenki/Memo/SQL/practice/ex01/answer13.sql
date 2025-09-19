SELECT
    e.l_name AS '',
    e.f_name AS '–¼',
    d.depart_name AS 'Š‘®•”'
    
FROM
    employee AS e
   INNER JOIN
    depart AS d
WHERE
    e.depart_id = d.depart_id
;