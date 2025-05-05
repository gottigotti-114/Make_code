-- root2という名前のユーザをlocalhostに限定して作成
-- IDENTIFIED BY -> ユーザのパスワードを決める
CREATE USER 'root2'@'localhost' IDENTIFIED BY 'root2_pass';

-- my_database(全てのデータベース)に、select(取得)・insert(追加)の権限を与える
-- TO ~ ローカルユーザに権限を付与
GRANT SELECT,INSERT ON my_database.* TO 'root2'@'localhost';