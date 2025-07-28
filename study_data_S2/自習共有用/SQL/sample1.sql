BEGIN;

INSERT INTO users (
 name,
 email,
 created_at
) VALUES (
 '藤原',
 'shu114@gmail.com',
 CURDATE()
);