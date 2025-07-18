-- CREATE USER hoge IDENTIFIED BY 'abcdefg';

-- 権限の設定
GRANT SELECT ON workbook.* TO hoge;

-- 権限の削除
REVOKE SELECT ON workbook.+ FROM hoge;

-- アカウントの削除
DROP USER hoge;

-- ユーザ一覧を表示
SELECT
    User, host, plugin
FROM
    mysql.user
;