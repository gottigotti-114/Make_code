-- 文字コードを設定
SET NAMES utf8mb4;

-- データベースの作成
CREATE DATABASE IF NOT EXISTS favorite_things
DEFAULT CHARACTER SET utf8mb4
DEFAULT COLLATE utf8mb4_general_ci;

USE favorite_things;

-- favoritesテーブルの作成
CREATE TABLE IF NOT EXISTS favorites (
  id INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(50) NOT NULL,
  favorite_food VARCHAR(100) NOT NULL
) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;

-- 初期データの挿入
INSERT INTO favorites (name, favorite_food) VALUES
('Aさん','米'),
('Bさん','豚肉');
