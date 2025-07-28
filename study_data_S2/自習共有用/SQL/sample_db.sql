-- sample_db.sql
-- 大量サンプルデータ生成用データベース

DROP DATABASE IF EXISTS sample_db;
CREATE DATABASE sample_db
  CHARACTER SET utf8mb4
  COLLATE utf8mb4_unicode_ci;
USE sample_db;

# ========================================
# テーブル定義
# ========================================

-- カテゴリ
CREATE TABLE categories (
  id   INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(100) NOT NULL UNIQUE
) ENGINE=InnoDB;

-- ユーザー
CREATE TABLE users (
  id         INT AUTO_INCREMENT PRIMARY KEY,
  name       VARCHAR(100) NOT NULL,
  email      VARCHAR(100) NOT NULL UNIQUE,
  created_at DATE          NOT NULL
) ENGINE=InnoDB;

-- 住所（ユーザー→住所 = 1:n）
CREATE TABLE addresses (
  id         INT AUTO_INCREMENT PRIMARY KEY,
  user_id    INT          NOT NULL,
  street     VARCHAR(255),
  city       VARCHAR(100),
  state      VARCHAR(100),
  country    VARCHAR(100),
  zip        VARCHAR(20),
  created_at DATE         NOT NULL,
  FOREIGN KEY (user_id) REFERENCES users(id)
) ENGINE=InnoDB;

-- 商品
CREATE TABLE products (
  id          INT AUTO_INCREMENT PRIMARY KEY,
  name        VARCHAR(255) NOT NULL,
  description TEXT,
  price       DECIMAL(10,2) NOT NULL,
  created_at  DATE          NOT NULL
) ENGINE=InnoDB;

-- 商品‐カテゴリ中間テーブル（多対多）
CREATE TABLE product_category (
  product_id  INT NOT NULL,
  category_id INT NOT NULL,
  PRIMARY KEY(product_id, category_id),
  FOREIGN KEY (product_id)  REFERENCES products(id),
  FOREIGN KEY (category_id) REFERENCES categories(id)
) ENGINE=InnoDB;

-- 注文（ユーザー→注文 = 1:n）
CREATE TABLE orders (
  id         INT AUTO_INCREMENT PRIMARY KEY,
  user_id    INT          NOT NULL,
  order_date DATETIME     NOT NULL,
  status     ENUM('pending','processing','shipped','delivered','cancelled')
             NOT NULL,
  FOREIGN KEY (user_id) REFERENCES users(id)
) ENGINE=InnoDB;

-- 注文アイテム（注文→注文アイテム = 1:n）
CREATE TABLE order_items (
  id         INT AUTO_INCREMENT PRIMARY KEY,
  order_id   INT          NOT NULL,
  product_id INT          NOT NULL,
  quantity   INT          NOT NULL,
  price      DECIMAL(10,2) NOT NULL,
  FOREIGN KEY (order_id)   REFERENCES orders(id),
  FOREIGN KEY (product_id) REFERENCES products(id)
) ENGINE=InnoDB;

-- 支払い（注文→支払い = 1:1）
CREATE TABLE payments (
  id           INT AUTO_INCREMENT PRIMARY KEY,
  order_id     INT          NOT NULL,
  amount       DECIMAL(10,2) NOT NULL,
  payment_date DATETIME     NOT NULL,
  method       ENUM('credit_card','paypal','bank_transfer','cash_on_delivery'),
  FOREIGN KEY (order_id) REFERENCES orders(id)
) ENGINE=InnoDB;

-- 発送情報（注文→発送 = 1:1）
CREATE TABLE shipments (
  id             INT AUTO_INCREMENT PRIMARY KEY,
  order_id       INT          NOT NULL,
  address_id     INT          NOT NULL,
  shipped_date   DATETIME,
  delivered_date DATETIME,
  carrier        VARCHAR(100),
  FOREIGN KEY (order_id)   REFERENCES orders(id),
  FOREIGN KEY (address_id) REFERENCES addresses(id)
) ENGINE=InnoDB;

-- レビュー（ユーザー→レビュー = 1:n, 商品→レビュー = 1:n）
CREATE TABLE reviews (
  id          INT AUTO_INCREMENT PRIMARY KEY,
  user_id     INT          NOT NULL,
  product_id  INT          NOT NULL,
  rating      INT          NOT NULL CHECK(rating BETWEEN 1 AND 5),
  comment     TEXT,
  review_date DATETIME     NOT NULL,
  FOREIGN KEY (user_id)    REFERENCES users(id),
  FOREIGN KEY (product_id) REFERENCES products(id)
) ENGINE=InnoDB;


# ========================================
# ストアドプロシージャ定義
# ========================================
DELIMITER //

CREATE PROCEDURE populate_categories()
BEGIN
  INSERT IGNORE INTO categories(name) VALUES
    ('Electronics'), ('Books'), ('Clothing'), ('Home'),
    ('Toys'), ('Sports'), ('Health'), ('Beauty');
END //

CREATE PROCEDURE populate_users()
BEGIN
  DECLARE i INT DEFAULT 1;
  WHILE i <= 100 DO
    INSERT INTO users(name, email, created_at)
    VALUES (
      CONCAT('User', i),
      CONCAT('user', i, '@example.com'),
      DATE_SUB(CURDATE(), INTERVAL FLOOR(RAND()*365) DAY)
    );
    SET i = i + 1;
  END WHILE;
END //

CREATE PROCEDURE populate_addresses()
BEGIN
  DECLARE uid INT DEFAULT 1;
  WHILE uid <= 100 DO
    INSERT INTO addresses(user_id, street, city, state, country, zip, created_at)
    VALUES (
      uid,
      CONCAT('Street ', uid),
      CONCAT('City ', uid),
      'State',
      'Country',
      LPAD(FLOOR(RAND()*100000), 5, '0'),
      DATE_SUB(CURDATE(), INTERVAL FLOOR(RAND()*365) DAY)
    );
    SET uid = uid + 1;
  END WHILE;
END //

CREATE PROCEDURE populate_products()
BEGIN
  DECLARE pid INT DEFAULT 1;
  WHILE pid <= 200 DO
    INSERT INTO products(name, description, price, created_at)
    VALUES (
      CONCAT('Product ', pid),
      CONCAT('This is the description for product ', pid),
      ROUND(100 + RAND()*4900, 2),
      DATE_SUB(CURDATE(), INTERVAL FLOOR(RAND()*365) DAY)
    );
    SET pid = pid + 1;
  END WHILE;
END //

CREATE PROCEDURE populate_product_category()
BEGIN
  DECLARE prod INT DEFAULT 1;
  DECLARE cat_count INT;
  DECLARE cid INT;
  WHILE prod <= 200 DO
    SET cat_count = FLOOR(1 + RAND()*3);
    WHILE cat_count > 0 DO
      SET cid = FLOOR(1 + RAND()*8);
      INSERT IGNORE INTO product_category(product_id, category_id)
      VALUES(prod, cid);
      SET cat_count = cat_count - 1;
    END WHILE;
    SET prod = prod + 1;
  END WHILE;
END //

CREATE PROCEDURE populate_orders()
BEGIN
  DECLARE oid INT DEFAULT 1;
  DECLARE uid INT;
  DECLARE st VARCHAR(20);
  WHILE oid <= 500 DO
    SET uid = FLOOR(1 + RAND()*100);
    SET st = ELT(FLOOR(1 + RAND()*5),
                 'pending','processing','shipped','delivered','cancelled');
    INSERT INTO orders(user_id, order_date, status)
    VALUES(
      uid,
      DATE_SUB(NOW(), INTERVAL FLOOR(RAND()*180) DAY),
      st
    );
    SET oid = oid + 1;
  END WHILE;
END //

CREATE PROCEDURE populate_order_items()
BEGIN
  DECLARE oi INT DEFAULT 1;
  DECLARE max_orders INT DEFAULT 500;
  DECLARE items INT;
  DECLARE prd INT;
  WHILE oi <= max_orders DO
    SET items = FLOOR(1 + RAND()*5);
    WHILE items > 0 DO
      SET prd = FLOOR(1 + RAND()*200);
      INSERT INTO order_items(order_id, product_id, quantity, price)
      SELECT oi, prd,
             FLOOR(1 + RAND()*5),
             price
      FROM products WHERE id = prd;
      SET items = items - 1;
    END WHILE;
    SET oi = oi + 1;
  END WHILE;
END //

CREATE PROCEDURE populate_payments()
BEGIN
  DECLARE oid INT DEFAULT 1;
  DECLARE amt DECIMAL(10,2);
  WHILE oid <= 500 DO
    SELECT ROUND(SUM(quantity*price),2)
      INTO amt
    FROM order_items
    WHERE order_id = oid;
    INSERT INTO payments(order_id, amount, payment_date, method)
    VALUES(
      oid,
      IFNULL(amt,0),
      DATE_ADD((SELECT order_date FROM orders WHERE id=oid), INTERVAL 1 HOUR),
      ELT(FLOOR(1 + RAND()*4),
          'credit_card','paypal','bank_transfer','cash_on_delivery')
    );
    SET oid = oid + 1;
  END WHILE;
END //

CREATE PROCEDURE populate_shipments()
BEGIN
  DECLARE oid INT DEFAULT 1;
  WHILE oid <= 500 DO
    INSERT INTO shipments(order_id, address_id, shipped_date, delivered_date, carrier)
    VALUES(
      oid,
      (SELECT user_id FROM orders WHERE id=oid),
      DATE_ADD((SELECT order_date FROM orders WHERE id=oid), INTERVAL 2 HOUR),
      DATE_ADD((SELECT order_date FROM orders WHERE id=oid), INTERVAL FLOOR(RAND()*5)+2 DAY),
      ELT(FLOOR(1 + RAND()*3),'DHL','FedEx','UPS')
    );
    SET oid = oid + 1;
  END WHILE;
END //

CREATE PROCEDURE populate_reviews()
BEGIN
  DECLARE rid INT DEFAULT 1;
  DECLARE max_p INT DEFAULT 200;
  DECLARE rev_count INT;
  DECLARE usr INT;
  WHILE rid <= max_p DO
    SET rev_count = FLOOR(RAND()*6);
    WHILE rev_count > 0 DO
      SET usr = FLOOR(1 + RAND()*100);
      INSERT INTO reviews(user_id, product_id, rating, comment, review_date)
      VALUES(
        usr,
        rid,
        FLOOR(1 + RAND()*5),
        CONCAT('Review of product ', rid, ' by user ', usr),
        DATE_SUB(NOW(), INTERVAL FLOOR(RAND()*180) DAY)
      );
      SET rev_count = rev_count - 1;
    END WHILE;
    SET rid = rid + 1;
  END WHILE;
END //

DELIMITER ;

# ========================================
# データ生成呼び出し
# ========================================

CALL populate_categories();
CALL populate_users();
CALL populate_addresses();
CALL populate_products();
CALL populate_product_category();
CALL populate_orders();
CALL populate_order_items();
CALL populate_payments();
CALL populate_shipments();
CALL populate_reviews();

-- 完了メッセージ
SELECT 'sample_db population complete!' AS status;