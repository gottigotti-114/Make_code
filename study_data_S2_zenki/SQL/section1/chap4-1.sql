CREATE TABLE
    quest
    (
        id INT AUTO_INCREMENT,
        name VARCHAR(100) NOT NULL,
        name_kana VARCHAR(255) NOT NULL,
        sex VARCHAR(5) NOT NULL,
        prefecture VARCHAR(10) NOT NULL,
        age INT DEFAULT 0,
        answer1 INT NULL,
        answer2 TEXT NULL,
        aswered DATETIME NOT NULL,
        PRIMARY KEY (id)
    )
;

-- MasterPractice
-- Q1

CREATE TABLE
    author
    (
        author_id CHAR(5) PRIMARY KEY,
        name VARCHAR(30) DEFAULT NULL,
        name_kana VARCHAR(100) DEFAULT NULL,
        birth DATE DEFAULT NULL
    )
;

-- Q2

CREATE TABLE
    order_desc
    (
        po_id INT NOT NULL,
        p_id CHAR(10) NOT NULL,
        quantity INT DEFAULT NULL,
        PRIMARY KEY (po_id, p_id)
    )
;

-- Q3

CREATE TABLE
    sales
    (
        s_id CHAR(5) NOT NULL,
        s_date CHAR(7) NOT NULL DEFAULT '0000-00',
        s_value INT DEFAULT NULL
        PRIMARY KEY (s_id,s_date)
    )
;

-- Q4

CREATE TABLE
    books
    (
        isbn CHAR(17) NOT NULL PRIMARY KEY,
        title VARCHAR(255) DEFAULT NULL,
        price INT DEFAULT NULL,
        publish VARCHAR(30) DEFAULT NULL,
        publish_date DATE DEFAULT NULL,
        category_id CHAR(5) DEFAULT NULL
    )
;

-- Q5

CREATE TABLE
    rental
    (
        id INT AUTO_INCREMENT PRIMARY KEY,
        user_id CHAR(7),
        isbn CHAR(13),
        rental_date DATE,
        returned SMALLINT DEFAULT 0
    )