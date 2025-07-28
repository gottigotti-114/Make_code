BEGIN;
CREATE USER hoge IDENTIFIED BY 'hoge';
GRANT SELECT ON sample_db.* TO hoge;

SELECT User FROM mysql.user;