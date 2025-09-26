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
```

## リクエストメソッド
### GETリクエスト
#### GET送信してもいいですか？という許可状をもらうためのお願い的なもの
### POSTリクエスト
#### POST送信してもいいですか？という許可状をもらうためのお願い的なもの

## Content-Type: text/html; charset=UTF-8について
### ボディ部がどんな形式で書かれているのかを表すのが、Content-Typeである。例えば、上記の場合だったらテキストベースのHTMLファイルで、文字コードはUTF-8 >> この言語でボディ部を読み取ればいいのか！
```
ほかの場合

・HTML(text/html; charset=UTF-8)
・プレーンテキスト(text/plain;charset=UTF-8)
・CSS(text/css)
・JavaScript(application/Javascript)
・JPEG画像(image/jpeg)
・PDF(application/pdf)
・Excel(application/vnd.openxm--(略称)--.sheet)
```

## サーブレットとは
### サーバー側で処理するプログラムをサーバーサイドプログラムという。そのプログラムをJavaで処理する際の技術を「サーブレット」「JSP」という

## サーブレットとJSP
- ### サーブレット...サーブレットはプログラムをサーブレットクラスというクラス単位に分けられる
- ### JSP... JSPはJavaを用いてサーバサイドプログラムを実現する技術であり、これはJSPファイルと呼ばれるファイル単位に分けられる

## アプリケーションサーバ
### ただのサーバではなく、アプリケーションを実行することができる機能のあるサーバのこと

## サーブレットコンテナ
### アプリケーションサーバの中でもJavaのサーブレットクラスを実行することに特化されたアプリケーションサーバをサーブレットコンテナという

## Webサーバとアプリケーションサーバの違い
- ### Webサーバは、クライアント（ブラウザ）からHTTPリクエストを受け取り、HTML、CSS、JavaScript、画像などの静的ファイルを返す。もしも動的な処理が必要とする場合にアプリケーションサーバにリクエストを送信する
- ### アプリケーションサーバは、Webサーバから渡されたリクエストに対して、プログラム（Java,PHP,Python）を実行する。

<br>

#### ※大まかにいうと、静的処理がWebサーバ、動的処理がアプリケーションサーバとなる

#### ※なぜ分けるかというと、スケーラビリティもあるが、外部からの不正アクセスでアプリケーションサーバに直接アクセスさせないために分けたのもある。

```
イメージはこんな感じ

[ブラウザ]
   ↓ リクエスト
[Webサーバ]
   ↓ 静的ならそのまま返す
   ↓ 動的ならアプリケーションサーバへ転送
[アプリケーションサーバ]
   ↓ 処理・DBアクセス
   ↑ 結果をWebサーバへ
[Webサーバ]
   ↑ クライアントへレスポンス
```

## サーブレットの初期構成プログラム
```java


import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * Servlet implementation class HelloServlet
 */
<<URLパターンの書き方：localhost:8080/R7_WebProject/HelloServlet>>
@WebServlet("/HelloServlet")
public class HelloServlet extends HttpServlet {
    <<Javaのシリアル化に関する識別子。サーブレットのバージョン管理に使われる。>>
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    <<ここがコンストラクタ>>
    public HelloServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
    <<ここがGETリクエスト処理>>
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub

        <<ここでクライアントに「Served at: /R7_WebProject」と表示される。>>
		response.getWriter().append("Served at: ").append(request.getContextPath());

        //授業版
        <<ここでContent-Typeを設定する>>
        response.setContentType("text/html; charset=UTF-8");
        <<ここでPrintWriter型の出力用メソッドを取得する PrintWriter型について以下で話す>>
        
		PrintWriter out = response.getWriter();
		out.println("<html>");
		out.println("...");
		out.println("</html>");

	}

}
```

## PrintWriter型について
### PrintWriter型はファイル入出力をJavaで行うときに使われる型であり、以下のようにファイル操作を行う。
```java
PrintWriter writer = new PrintWriter("output.txt");
writer.println("ファイルに書き込みます");
writer.close();
```
### このときに、PrintWriter型はテキストベースのファイルを扱うために使われる型だとわかる。なのでサーブレットでout.println("<html>")を使う場合、ファイルに直接「<html>」と書いているようなものである。

## サーブレットクラスのURL
### サーブレットのURLの形式はこのようになっている
```
http://<サーバ名>/<アプリケーション名>/<URLパターン・@WebServlet>
```

## サーブレットアノテーションについて
### 同じサーブレットアノテーションが二つ以上あるとエラーになる
```java
// 一方のファイル
@WebServlet("./UranaiServlet2")

// もう一方のファイル
@WebServlet("./UranaiServlet2")

※これはエラーになるので、手動で変更しないといけない
```

## サーブレットクラス
### サーブレットクラスにURLパターンを設定したら、ブラウザからリクエストして実行できるようになる
```java
例：クラス名がUranaiServletの場合

// サーブレットクラス内
@WebServlet("./UranaiServlet")

// URLで指定するとき
localhost:8080/R7_WebProject/UranaiServlet

※ここでURLのUranaiServletを指定することで、WebServlet("./UranaiServlet")で検知して、指定されたサーブレットクラスが実行される
```

## JSPファイルとは
### <% %>で挟んでプログラムを書くことができる。スクリプト式のファイル。
### リクエストされるとサーブレットクラスに変換される。
```JSPファイル```
```java
//ここがスクリプト部
<%
String name = "湊　雄輔";
int age = 23;
%>
//ここがテンプレート部
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>JSPのサンプル</title>
</head>
<body>
私の名前は<%= name >で、年齢は<%= age >歳です。
</body>
</html>
```

### JSPのコメントの書き方
```java
//JSPコメントはユーザから見えない（レスポンスされないような設定をされている）
<%-- JSPのコメント -->
//HTMLのコメントはユーザから見えるようになっている（そのままレスポンスされるようになっている）
<!-- HTMLのコメント -->
```

## pageディレクティブとは
### JSPの初期コンパイル時にファイル（JSP）について設定するときに使われるプログラムをpageディレクティブという
### pageディレクティブの書き方
```jsp
<%-- @があるのがpageディレクティブ（コンパイル時に取り込まれる --%>
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" %>
```

## 実際のJSPファイルのイメージ
```jsp
<%@ page language="java" contentType="text/html; charset=UTF-8"

<% //ここでライブラリをpageディレクトリを使って持ってくる >
    pageEncoding="UTF-8"%>
<%@ page import="java.util.Date" %>
<%@ page import="java.text.SimpleDateFormat" %>
<%
	//運勢をランダムで決定
	String[] luckArray = {
			"超すっきり",
			"すっきり",
			"最悪"
	};
	
	int index = (int)(Math.random() * 3);
	String luck = luckArray[index];
	
	//実行日を取得
	Date date = new Date();
	SimpleDateFormat sdf = new SimpleDateFormat("MM月dd日");
	String today = sdf.format(date);
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
    <% // ここで上のスクリプトの結果を挟む
    %>
	<p><%= today %>の運勢は「<%= luck %>」です</p>
</body>
</html>
```

## もしもJSPファイルでエラーがあった場合
![JSPエラーの500ページ](./java_image/スクリーンショット%202025-09-26%20113959.png)

## もしもパッケージ内のクラスを読み込む場合
```jsp
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="EX.Employee" %>
<%
	Employee emp = new Employee("0001","湊 雄輔");
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<p>IDは<%= emp.getId() %>、名前は<%= emp.getName() %>
</body>
</html>
```
### このように、import="EX.Employee"となる。
```
書き方
page import="パッケージ名.ファイル名(拡張子なし)"
```
