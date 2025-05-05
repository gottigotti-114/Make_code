-- IF NOT EXISTSとは、もしそのテーブルが存在しなかった場合に処理するコード
CREATE TABLE IF NOT EXISTS favorites (
  id INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(50) NOT NULL,
  favorite_food VARCHAR(100) NOT NULL
);

-- (name,favorite_food)のフィールドに代入
INSERT INTO favorites (name, favorite_food) VALUES
('Aさん','米'),
('Bさん','豚肉');

SELECT * FROM favorites;