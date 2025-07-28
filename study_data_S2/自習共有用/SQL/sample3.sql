BEGIN;
USE sample_db;

CREATE TABLE users_2
(
 id INT AUTO_INCREMENT PRIMARY KEY,
 name VARCHAR(15) NOT NULL,
 age INT NOT NULL,
 prefecture VARCHAR(100) NULL
);

INSERT INTO users_2 (
 name,
 age,
 prefecture
) VALUES 
 ('藤原',19,'島根県'),
 ('上代',19,'島根県'),
 ('大輔',30,'福岡県')
 