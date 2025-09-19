INSERT INTO usr (user_id, l_name, f_name, email)
SELECT
    s_id,
    l_name,
    f_name,
    'admin@wings.msn.to'
FROM
    employee
WHERE
    last_update >= '2012-01-01'
;

-- マスタープラクティス
-- 問一
INSERT INTO
    time_card
    (
        s_id,
        r_date,
        work_time
    )
SELECT
    s_id,
    CURRENT_DATE,
    0
FROM
    employee
WHERE
    class IN (
        '主任',
        '担当',
        'アシスタント'
    )
;