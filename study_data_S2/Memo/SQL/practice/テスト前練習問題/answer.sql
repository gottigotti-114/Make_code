-- ※解答例と違っていても、同じ結果が出ているものや
-- 意図がくみ取れるものは〇にしています。

-- 1 SELECT
-- ユーザテーブル(usr)からすべてのレコードを取り出してください。取り出す列は全ての列とします。。
/*
SELECT ※※※
  FROM ※※※;
*/
SELECT *
  FROM usr;

-- 2 SELECT 列指定
-- 商品テーブル（product）からレコードを取り出してください。取り出す列は「p_name」「price」列とします。
SELECT p_name, price
  FROM product;

-- 3 WHERE
-- アンケート回答テーブル(quest)から性別が「男」のレコードを取り出してください。取り出す列は「name」「sex」「answer1」「answer2」列とします。
/*
SELECT name,
       sex,
       answer1,
       answer2
  FROM ※※※
  ※※※;
*/
SELECT name,
       sex,
       answer1,
       answer2
  FROM quest
 WHERE sex = '男';

-- 4 WHERE
-- ユーザテーブル(usr)から「user_id」が『A200501』 のユーザのレコードを取り出してください。取り出す列はすべての列とします。
SELECT *
  FROM usr
 WHERE user_id = 'A200501';

-- 5 WHERE BETWEEN
-- アンケート回答テーブル(quest)から30歳～39歳の人の回答だけを取り出してください。取り出す列は「年齢」「answer1」「answer2」とします。
/*
SELECT ※※※
  FROM quest
 WHERE age ※※※;
*/
SELECT age,
       answer1,
       answer2
  FROM quest
 WHERE age BETWEEN 30 AND 39;

-- 6 WHERE あいまい
-- 著者情報テーブル(author)から名前が「山田」で始まる著者の情報を取り出してみましょう。取り出す対象は全ての列とします。
-- (ヒント)　ワイルドカード　%→0文字以上の任意の文字列　_→任意の１文字
/*
SELECT *
  FROM author
 WHERE ※※※;
*/
SELECT *
  FROM author
 WHERE name LIKE '山田%';

-- 7 WHERE 複合条件
-- 書籍情報テーブル(books)から出版社が「日経BP」「翔泳社」かつ価格が3000円以上のレコードだけを取り出してみましょう。取り出す列は「isbn」「title」「price」列とします。
SELECT isbn,
       title,
       price
  FROM books
 WHERE publish IN('日経BP','翔泳社')
   AND price >= 3000;

-- 8 WHERE 複合条件
-- アンケート回答テーブル(quest)から性別が女であり、かつ、「answer1」の評価が3である回答者の情報のみを取り出してみましょう。取り出す列は前列であるものとします。
SELECT *
  FROM quest
 WHERE sex = '女'
   AND answer1 = 3;

-- 9 ORDER BY
-- 書籍情報テーブル(books)から書籍価格が安い順にデータを取り出してください。取り出す列は「title」「price」として、それぞれ「タイトル」「価格」と列の別名をつけてください。
/*
SELECT title ※※※,
       price ※※※
  FROM books
 ※※※;
*/
SELECT title AS 'タイトル',
       price AS '価格'
  FROM books
 ORDER BY price ASC;

-- 10 GROUP BY
-- アンケート回答テーブル(quest)から性別ごとのアンケート回答者数を表示する。取り出す列は「sex」、性別ごとの回答者数とし、列に「性別」「性別ごとの回答者数」と別名をつける。
SELECT sex AS '性別',
       COUNT(*) AS '性別ごとの回答者数'
  FROM quest
 GROUP BY sex;

-- 11 GROUP BY
-- 書籍情報テーブル(books)から出版社ごとの価格平均値（その出版社が出している本の平均価格）を求めてください。取得する列は「publish」とpriceの平均値とする。
SELECT publish,
       AVG(price)
  FROM books
 GROUP BY publish;

-- 12 HAVING
-- 著者-書籍情報テーブル(author_book)で、著者ごとの書籍数を求め、登録数が３冊以上の情報だけを取り出してみましょう。 
SELECT author_id,
       COUNT(isbn)
  FROM author_books
 GROUP BY author_id
HAVING COUNT(isbn) >= 3;

-- 13 内部結合
-- 社員テーブル（employee）と所属部署テーブル(depart)を内部結合して氏、名、所属部署名の形で出力してください。列の別名もそれぞれ「氏」「名」「所属部署名」とすること。
SELECT e.l_name AS '氏',
       e.f_name AS '名',
       d.depart_name AS 所属部署名
  FROM employee AS e INNER JOIN depart AS d
                ON e.depart_id = d.depart_id;

-- 14 外部結合
-- ユーザテーブル(usr)と貸し出し記録テーブル(rental)から、ユーザごとの貸し出し数を、貸し出し件数が多い順に取得してみましょう。取得列は、ユーザの氏名と貸し出し件数とし、貸し出し件数が０件のユーザも出力するものとする。
SELECT u.l_name,
       u.f_name,
       COUNT(r.id)
  FROM rental AS r RIGHT JOIN usr AS u
                  ON r.user_id = u.user_id
 GROUP BY u.user_id,
          u.l_name,
          u.f_name
 ORDER BY COUNT(r.id) DESC;

-- 15 外部結合
-- ユーザーテーブル(usr)と注文書テーブル(order_main)からユーザごとの注文回数を求めてください。その際、1度も注文したことのないユーザの情報も表示してください。取り出す列はユーザの「氏」「名」「ユーザーごとの注文回数」とします。
SELECT u.l_name AS '氏',
       u.f_name AS '名',
       COUNT(o.po_id) AS 'ユーザーごとの注文回数'
  FROM usr AS u LEFT JOIN order_main AS o
                  ON u.user_id = o.user_id
 GROUP BY u.user_id, u.l_name, u.f_name;

-- 16 サブクエリ
-- アンケート回答テーブル(quest)から回答者全体の平均年齢を超えている人の回答を評価の低い順に取り出してください。サブクエリを使用して求めること。表示する列は「name」「answer1」「answer2」とする。
/*
SELECT name,
       answer1,
       answer2
  FROM quest 
  ※※※ > (SELECT ※※※
                FROM quest)
 ORDER BY answer1 ※※※;
*/
SELECT name,
       answer1,
       answer2
  FROM quest 
 WhERE age > (SELECT AVG(age)
                FROM quest)
 ORDER BY answer1 ASC;

-- 17 サブクエリ
-- 注文明細テーブル(order_desc)と商品テーブル(product)を利用して今まで一度も注文されたことのない商品を調べてください。表示する列は「商品コード」と「商品名」とします
SELECT p.p_id AS '商品コード',
       p_name AS '商品名'
  FROM product AS p
 WHERE NOT EXISTS (SELECT *
                     FROM order_desc AS o
                    WHERE p.p_id = o.p_id);
-- NOT IN演算子を使った方法、　外部結合を使った方法なども〇