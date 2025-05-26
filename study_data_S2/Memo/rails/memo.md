# Railsのメモ

## Railsとは

    Rubyで作成されたwebアプリ用のフレームワーク

## フレームワークとは

    直訳すると骨組み
    様々なアプリケーションを作成するための基となる
    機能を提供しており、追加の変更を行うことで、一つのシステムができる

```備考```

Rails以外にもJavaのspring boot<br>
PHPのLaravel<br>
PythonのDjango<br>
などがある

## Gemとは

    rubyのパッケージのこと
    rubyで使用できる様々な機能が
    パッケージとして提供される

## Gemのコマンド

### パッケージのインストール
オプションでバージョン指定もできる
```Markdown
パッケージのインストール<hr>
gem install パッケージ名 [-v バージョン]
gem uninstall パッケージ名
gem list
```

## Railsの考え方

RailsはMVCモデルと呼ばれる考え方で
構成されている。

- ### Model … データベースとのやり取りを行う
- ### View … html作成用のテンプレート
- ### Controller … 制御を行う、Modelを使ってデータ取得やViewを使ってhtmlの表示など

## Railsの動作環境

    Railsはサーバーで動作する
    アプリケーションとなる

    サーバで動作するシステムを
    バックエンド

    クライアントで動作するシステムを
    フロントエンド

## Railsの動作環境2
### Railsは自機でサーバー機能を動作させ、そこにブラウザでアクセスすることで動作チェックを行う

サーバーの起動コマンド
```Bash
rails server

※省略形
rails s
```
自機のサーバーにアクセス：URLとして
```Bash
http://localhost:3000/
```

localhostは自分自身に返ってくるドメインになる。

## Railsを知るうえでの補足

    自分のIPアドレスを指す・・・ループバックアドレス
    ドメイン名とIPアドレスを変換する・・・DNS

## Railsで新規プロジェクトを作成する

### 新規作成
```Bash
rails new プロジェクト名
```

## Railsの基本的なアドレス
```Bash
http://サーバー名/コントローラ名/アクション名/
※アクションとは
controllerに作成されたメソッドのこと
```
```Ruby
class ApplicationController < ActionController::Base
    # 上がコントローラ

    #下がアクション
    def hello
        render html: "hello,world"
    end
end
```


## config/routes.rb
### ドメイン名とコントローラーとアクションを結び付けるファイル
### ここに記載されていないアクションにはアクセスできない

```routes.rb```
```ruby
Rails.application.routes.draw do
  # Define your application routes per the DSL in https://guides.rubyonrails.org/routing.html

  # Reveal health status on /up that returns 200 if the app boots with no exceptions, otherwise 500.
  # Can be used by load balancers and uptime monitors to verify that the app is live.
  get "up" => "rails/health#show", as: :rails_health_check

  # Defines the root path route ("/")
  # root "posts#index"

  # ここが結び付けるコントローラとアクションを決めている
  root "application#hello"
end
```
## ルートの設定

- ルートとは
    - サーバー名だけでアクセスできるWebページのこと

- Railsでルートを設定するときは
    - root "コントローラ名#アクション名"

とする

## 実行したら？
ループバックアドレスで指定ポート番号にアクセスすると実行される

## scaffoldとは
### 直訳すると「足場」

    データベースの形を設定してやると自動的に
    CRUD(Create, Read, Update, Delete)の機能を作ってくれる。
    ただし、余計な機能もあったりするので、あまり使用されない。

## Railsのデータベース設計

    Railsのテーブルは、idというフィールド名のオートナンバー型のフィールドが自動的に主キーとなる

## Railsの命令規則

    Railsには下記の命名規則がある。
    モデル ... 英語の単数形
    テーブル ... モデル名の複数形
    コントローラー ... 英語の複数形（必須ではない）

## Scaffoldの実行

```ruby
rails generate scaffold モデル名 フィールド名:型 フィールド名:型
```
<hr>
<hr>

## scaffoldの実行順番
### 1.プログラムの作成
```bash
rails new 新規プログラム名
```

### 2.チェンジディレクトリ
```bash
cd 新規プログラム名
```

### 3.モデルの作成
```bash
rails generate scaffold モデル名 フィールド名:型 フィールド名:型
```

### 4.データベースの作成
```bash
rails db:migrate
```

### 5.サーバーの起動
```bash
rails s
```

### 6.アクセス
※ここで注意：テーブル名は複数形であり、三単現のsがつく
```
http://localhost:3000/モデル名s/
```

<hr>
<hr>

## テーブルの作成
### モデルを作成すると、テーブルを作成する必要がある

```bash
rails db:migrate
```

## generateの取り消し
### generateで作成したファイルを削除したいときは、普通にファイルを消すのではなく、コマンドで削除する必要がある。

    rails destroy ～
    ※

    どのファイルにアクセスするかの設定がされているファイル
    = config/routes.rb


## generateで作成したファイル削除
rails destroy モデル名 フィールド名:型 フィールド名:型

## MVCの挙動について
![MVCの挙動](./スクリーンショット%202025-04-30%20102046.png)

## Viewファイルについて
### Viewファイルはhtmlの中にRubyを埋め込んで作成される。

    ソース(app/views/users)
    拡張子は、html.erb(エンベデッドシステム：埋め込みプログラムのことをいう)

    通常のhtmlとRuby用の<% rubyのコード %>のタグを使用する

### <% ~ %> ... Rubyのコードを実行し、その結果を出力しない
### <%= ~ %> ... Rubyのコードを実行し、その結果を出力する

```ruby
#<%=から%>で挟まれているものがエンベデッド(スクリプト)である
<p style="color: green"><%= notice %></p>

<h1>ユーザ一覧</h1>

<div id="users">
  <% @users.each do |user| %>
    <%= render user %>
    <p>
      <%= link_to "Show this user", user %>
    </p>
  <% end %>
</div>

#ここは<%=%>なので出力する
<%= link_to "New user", new_user_path %>
```

```上記のコードの解説```

    render ... 出力
    link_to ... aタグを作成する
    
    @users.each do |user|でひとつずつレコードデータを取ってきている

## アソシエーションの設定
### テーブルの関連付けのことをアソシエーションという
### Railsでテーブルを関連付けしたいときは、以下の手順が必要となる

1. 1対多の多側のテーブルのフィールドにモデル名_idのフィールドをIntger型で作成する。これにより、1側のidと対応させることができる
1. 1側のモデルに

    has_many : 多側のモデル名

    を記述する
1. 多側のモデルに

    belongs_to : 1側のモデル名
    
    を記述をする

これにより、1側のインスタンス.多側のモデル名.フィールド名や1側インスタンス.1側のモデル名.フィールド名のアクセスが可能になる

## 練習問題
### Q.Sales_appというプロジェクトを作成し、下記テーブルをスキャフォールドで作成する

        モデル名：item
        フィールド名：name...String
                    suryo...integer

        Saleの詳細表示
        商品名：
        単価：
        数量：
        金額：
        が出るようにする

### １．プロジェクトの作成
    rails new sales_app
### ２．プロジェクトのフォルダに移動
    cd sales_app
### ３．スキャフォールドの実行
    rails generate scaffold item name:string price:integer
    rails generate scaffold sale item_id:integer suryo:integer
### ４．テーブルの作成
    rails db:migrate
### ５．アソシエーションに設定
    app\models\item.rbに
    has_many:sale
    app\models\sale.rbに
    belongs_to:item
    を追加
### ６．詳細表示の修正
    item.sale.フィールド名で関連付けされたフィールドにアクセスできるので、それを使って、app\views\sales\_sale.html.erbを修正

## destroyについて

        テーブルを作成した後に、destroyを行う場合は先に
            rails db:migrate version=0
        を行う必要がある。
        ただし、いまあで登録してきたデータがすべて削除されるので注意すること
        誤ってrails destroyを先にした場合は、
            rails db:migrate version=0
        を行った後
            storage\development.splite3（ファイルのパス名）
        を削除する

## ここまでで気になっていることを補足
ホーム画面が 作成したテーブルの名前が上に表示されている画面になる


## collection_select
### テーブル情報をもとに、セレクトボックスを作成するもの

        collection_select :フィールド名, モデル名.all, 取得したデータの登録をするフィールド名, :取得したデータの表示をするフィールド名

        今回のコード
        「    <%= form.collection_select :user_id ,User.all ,:id, :name%>」

        <<解説>>
        form -> ブロック変数

        :user_id -> フォームが送信されたときのフィールド名

        User.all -> モデル名のデータベースの全てのレコード取得

        :id -> <option value="1">みたいにhtmlでいう、そのセレクトボックスのid番号になる

        :name -> 選択肢の表示させるテキストになる

## scaffoldでできるもの

- ### モデル・・・指定したモデル名のモデル
- ### マイグレーションファイル・・・テーブル作成用のファイル。rails db:migrateを実行することでテーブルが作成される。
- ### コントローラー・・・モデル名を複数形にしたファイル。トップページ用のindex、新規作成画面表示用のnew、データ登録用のcreate等が作成される。アクションと同じ名前のviewファイルが自動的に表示される。
- ### ビュー・・・
    - ### index.html.erb トップページ用
    - ### show.html.erb 詳細表示用
    - ### new.html.erb 新規作成用
    - ### edit.html.erb 更新用
    - ### _form.hmtl.erb データ登録用（new.html.erbやedit.html.erbから呼び出し使用する）
    - ### _モデル名.html.erb データ表示用（index.html.erbやshow.htmlから呼び出し使用する）

- ### テスト用ファイル
    #### これ以外にconfig/routes.rbにアクセス用の登録が追記される

## モデルのメソッド
- ### .all・・・全件のデータ取得。一軒のデータを持っているインスタンスの配列になる。
- ### .find(id番号)・・・指定されたIDのインスタンスを取得する

## railsコマンドの省略形
- ### rails server ... rails s
- ### rails generate ... rails g
- ### rails destroy ... rails d
- ### rails console ... rails c
- ### rails test ... rails t ->テストトリブンというものがある

## コントローラーの作成

    rails g controller コントローラー名 [アクション名 ...]
    例：rails g controller Static Pages home help
    
    （大文字区切りで単語を命名）パスカルケース：コントローラの名前、クラス名
    （アンダーバーを付ける命名）スネークケース：ファイル名

    コントローラを作成すると同時にapp/viewsにコントローラと同じ名前のフォルダが作成される
    アクション名を名づけることで、コントローラにアクションが追加されまた同名のviewファイルが作成され、routes.rbにも追加される。









## Railsの豆知識
- ### .saveは成功したときに真になる
- ### renderはレンダリングのこと。個人的にはrequireに少し似ている
- ### render "form"は_form.html.erbを呼び出しているということ
- ### 基本controllersで作動しており、モデル名_controllers.erbのアクションメソッドが起動する。その際に、before_action :set_○○とあるが、これはアクションが実行される前に自動で設定されるもの
モデル名の複数形を知りたい場合、controllersのコントローラ名がモデル名の複数形になる
もしくはターミナルで"person".pluralizeのように"単数形".pluralize

## controllersの挙動
```ruby
class UsersController < ApplicationController
  # ここでset_userメソッドを起動する。
  # only: %i[]は括弧にかこまれたメソッドにそのset_userの前処理を適用する
  before_action :set_user, only: %i[ show edit update destroy ]

  # GET /users or /users.json
  def index #->indexメソッドが起動すれば、自動的にviewsのindex.html.erbが起動される
    @users = User.all
  end

  # GET /users/1 or /users/1.json
  def show
  end

  # GET /users/new
  def new
    @user = User.new
  end

  # GET /users/1/edit
  def edit
  end

  # POST /users or /users.json
  def create
    @user = User.new(user_params)

    respond_to do |format|
      if @user.save
        format.html { redirect_to @user, notice: "User was successfully created." }
        format.json { render :show, status: :created, location: @user }
      else
        format.html { render :new, status: :unprocessable_entity }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end

  # PATCH/PUT /users/1 or /users/1.json
  def update
    respond_to do |format|
      if @user.update(user_params)
        format.html { redirect_to @user, notice: "User was successfully updated." }
        format.json { render :show, status: :ok, location: @user }
      else
        format.html { render :edit, status: :unprocessable_entity }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end

  # DELETE /users/1 or /users/1.json
  def destroy
    @user.destroy!

    respond_to do |format|
      format.html { redirect_to users_path, status: :see_other, notice: "User was successfully destroyed." }
      format.json { head :no_content }
    end
  end

  private
    # Use callbacks to share common setup or constraints between actions.
    def set_user
      #ここで@userにテーブルデータをidで指定して持ってきて@userに格納
      @user = User.find(params[:id])
    end

    # Only allow a list of trusted parameters through.
    # ここではparams.require(持ってくるシンボラー配列のキー).permit(通過してもよいハッシュキー)でユーザに変なデータを読み取らせないような工夫をされている
    def user_params
      params.require(:user).permit(:name, :email)
    end
end
```

## 新しいページを作成する方法
### 1. コントローラに外套のアクションを追加する
### 2. config/routes.rbにルーティング情報追加
### 3. views/コントローラ名の下に該当のファイルを作成

## テストについて
### テストをもとにシステムを作成することをテストトリブンと言う。テスト用のファイルはコントローラの作成時に自動で作成される。
  #### ※テスト用のファイルは親ディレクトリの直下のtestディレクトリ内に存在する


## テストの実行方法
### テストの実行方法は下記をターミナルで入力すると実行される
```bash
rails test
```
### テストの見方

  - ### runs → 実行されたテストの数
  - ### assertions → アサーション（期待値と実際の値を比較してチェックする処理）の回数
  - ### failures → 期待通りの結果にならなかったテストの数
  - ### errors → コード自体に致命的なエラーがある数
  - ### skips → スキップされたテストの数




## viewsの<!DOCTYPE>などのヘッダー、フッターはどこに行ったのか？ -> テストの見方
### views/layoutsに存在する、application.html.erbにある
### テストの見方
```ruby
  test "should get about" do #aboutというコントローラを実行し、以下のテストをしますよ
  get static_pages_about_url #static_pagesのaboutのurlとその情報を取得(Getだから)
  assert_response :success   #ここでassert_responseというテストをして成功すれば、successを返す
  assert_select "title","About | Ruby on Rails Tutorial Sample App" #titleというタグが、次のメッセージか確認する
  end
```

## Viewファイルに情報を渡す
### yieldというメソッドを使うことによって変数やファイルにviewファイルからデータを渡すことができる。

```ruby
データの設定
  provide(:データ名.値) #参照できるように設定する。キーと参照させる値
データの参照
  yield(:データ名) #データ名を参照する
```
### 例
```ruby
# 別ファイル
<% provide(:title, "About") %>
# htmlファイル
<title><%= yield(:title) %> | Ruby on Rails Tutorial Sample App</title>
```
### 注意点
もしも<%= yield %>だけだと、ビューの内容が送られる

## ルーティングについて
### routes.rbの主な設定は以下の通り
- ### get "コントローラ名/アクション名" <- 指定したURLにGET送信を許可する
- ### post "コントローラ名/アクション名" <- 指定したURLにPOST送信を許可する
- ### root "コントローラ名#アクション名" <- ルートにアクセスしたとき、指定したコントローラにアクションを実行する

    例：localhost:3000/だけで指定したhomeやhelpなどのアクションページに移動できる

- ### "URL" ,to: "コントローラ名#アクション名" <- 指定したURLにアクセスしたとき、指定したコントローラのアクションを実行する
- ### resources :コントローラ名 <- 指定されたコントローラに対し、indexやupdateなど、定型なアクションを許可する（RESTアーキテクチャー）
## Rails豆知識
- ### \<em>タグは斜めにする
- ### get送信はURL事態に情報が埋め込まれている
- ### routes.rbにget 'static_pages(アプリの名前)/about(コントローラ名)'を作ると、自動的にstatic_pages_about_urlのような変数が自動的に作成される
- ### resources :authors(コントローラ名)としたらcreateやupdateなど自動的に作られる。