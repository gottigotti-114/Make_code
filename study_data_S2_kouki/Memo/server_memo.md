# Javaのメモ
## 要素・タグ・属性のそれぞれの名前について
```html
<a href="example.html">こちらへ</a>
|要素-----------------------------|
|タグ-----------------|        |--|
   |属性--------------|
```
## httpのリクエストとレスポンスについて
### リクエストの中身
```
GET /index.html HTTP/1.1

(リクエストの方法：GET)
(リクエストの対象：index.html)
(使用するプロトコル：HTTP/1.1)
という意味になる
```
### レスポンスの中身
```
HTTP/1.1 200 OK

(使用するプロトコル：HTTP/1.1)
(動作結果：200 OK)
```
### レスポンスの動作結果について
- ### 200 OK ... リクエスト成功
- ### 404 NotFound ... 対象が見つからない
- ### 405 ... リクエストメソッドを許可されなかった
- ### 500 ... エラー発生

### リクエスト・レスポンス詳細
```
=======リクエスト：ヘッダ部==========
GET /index.html HTTP/1.1
accept: image\jpeg, image/gif,...
accept-language: ja-JP,en-US;q=0.5
user-agent: Mozilla/4.0...
accept-encoding: gzip, deflate
host: www.example.com
===================================

=======レスポンス：ヘッダ部==========
HTTP/1.1 200 OK
Date: Wed, 19 Sep 2025 12:41:00 GMT
Server: Apache/2.4.41 (Unix)
Last-Modified: Tue, 18 Sep 2025 15:20:30 GMT
ETag: "5d8c72a-102a-4d3f"
Accept-Ranges: bytes
Content-Length: 4122
Connection: keep-alive
Content-Type: text/html; charset=UTF-8
===================================
=======レスポンス：ボディ部==========
<html>
...
</html>

