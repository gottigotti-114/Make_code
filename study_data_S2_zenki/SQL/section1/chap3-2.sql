INSERT INTO usr (
    user_id,
    l_name,
    f_name,
    l_name_kana,
    f_name_kana,
    tel
)
VALUES
(
    'B200507',
    '神田',
    '愛',
    'カンダ',
    'アイ',
    '040-888-8888'
);

-- マスタープラクティス
-- 問１
INSERT INTO
    quest
(
   name,
   name_kana,
   sex,
   prefecture,
   answer1,
   answer2,
   answered 
)
VALUES
(
    '佐々木三郎',
    'ササキサブロウ',
    '男',
    '東京都',
    '3',
    '興味深いです。',
    CURRENT_DATE
);

-- 問２
INSERT INTO
    rental
(
    user_id,
    isbn,
    rental_date
)
VALUES
(
    'B200502',
    '4-0010-0000-0',
    CURRENT_DATE
);

-- 問３
INSERT INTO
    author
(
    author_id,
    name,
    name_kana,
    birth
)
VALUES
(
    'U0001',
    '内田幸子',
    'ウチダサチコ',
    '1973-04-10'
);

-- 問４
INSERT INTO
    employee
(
    s_id,
    l_name,
    depart_id,
    last_update
)
VALUES
(
    'WA00001',
    '和田',
    'J01',
    CURRENT_DATE
);