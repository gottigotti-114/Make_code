# Dockerのメモ
## Dockerのインストール
### 1.Webからインストール
```
https://www.docker.com/get-started/
```
### 2.デスクトップにruby_studyの作成
### 3.ruby_study階層で以下のコマンドをBashで実行
```bash
touch Dockerfile docker-compose.yml Gemfile Gemfile.lock
```
### 4.作成されたファイルにそれぞれ記述して保存
```Dockerfile```
```Dockerfile
FROM ruby:3.2.2
RUN apt-get update -qq && apt-get install -y build-essential libpq-dev nodejs 
WORKDIR /app
COPY Gemfile /app/Gemfile
COPY Gemfile.lock /app/Gemfile.lock
RUN bundle install
ENV LANG=ja_JP.UTF-8
ENV TZ=Asia/Tokyo
```
```docker-compose.yml```
```yml
version: '3.7'
services:
  app:
    build: .
    tty: true
    ports:
      - 3000:3000
    volumes:
      - .:/app
```

### 5.記述したファイルをDockerに送り起動する
Bashで階層を変えずに以下のコマンドを実行
```bash
 docker compose up -d
```

### 6.VSCでリモートエクスプローラーを起動する
#### Open in Contenaからコンテナを起動し、ファイルを開く
※もし拡張機能がインストールされていなかったらDev Containerで検索して拡張機能をインストール
#### 次に、appディレクトリに移動する

### 7.ここでrubyの動作が可能になる

### 2-1.sampleディレクトリもDockerに送る
COPY 送りたいディレクトリ コンテナ名/コンテナ上で表示する名前
```Gemfile
COPY sample /app/sample
```

### 2-2 Containaを削除する

### 2-3再度コマンドを実行
```Bash
docker compose up -d
```

## 3-1 実際のルーティン
### DockerDesktopを起動する。
### ContainersからRUNをして起動する
### 


## Dockerの開発の流れ
### ruby_studyの中身について

        ruby_studyのDockerfileの中に、Dockerに送るためのデータが入っている
        例えば、COPY Gemfile /app/Gemfileは、
        Dockerの中に閉じ込められたruby環境にWindows上から情報を送ることができる

        ※補足
        Dockerは、すぐに開発環境（コンテナ）を消せるように、Windowsに影響しないように、その開発環境はDocker上に閉じ込められている


## Dockerfileの見方
```Dockerfile
FROM ruby:3.2.2
RUN apt-get update -qq && apt-get install -y build-essential libpq-dev nodejs 
WORKDIR /app
COPY Gemfile /app/Gemfile
COPY Gemfile.lock /app/Gemfile.lock
RUN bundle install
ENV LANG=ja_JP.UTF-8
ENV TZ=Asia/Tokyo
```

### FROM ruby: 3.2.2
    ここでrubyのベースイメージを取ってくる
### RUN apt-get update -qq && apt-get install -y build-essential libpq-dev nodejs 
    ここでパッケージをインストールしている
### WORKDIR /app
    APPフィールドに必要ファイルを保存する
### COPY Gemfile /app/Gemfile
### COPY Gemfile.lock /app/Gemfile.lock
    WindowsにあるGemfileをDockerに送る
### RUN bundle install
    DockerでGemfileに必要なコマンドを実行する
### ENV LANG=ja_JP.UTF-8
    環境設定 -> UTF-8に言語設定
### ENV TZ=Asia/Tokyo
    環境設定 -> タイムゾーンを東京に設定

## docker-composeの見方
```docker-compose.yml```
```yml
version: '3.7'
services:
  app:
    build: .
    tty: true
    ports:
      - 3000:3000
    volumes:
      - .:/app
```
### services:
    セクション設定
### app:
    サービスの名前を設定
### build: .
    ビルドするDockerfileの設定
### tty: true
    仮想ターミナルを可能にする
### ports:
    コンテナのポートを設定する
### volumes:
#### appのホストマシンとコンテナでファイルを共有する設定
```
コンテナも簡単に消すことができる
コンテナの中でも残したいフォルダを指定することができる
例 volumes: - .: /appはappの下はコンテナを消しても残る
```

## コンテナの停止
コンテナが停止してアクセスできなくなる
```bash
Docker compose down
```

## コンテナの再燃
コンテナをアクセス可能にする
```bash
Docker compose up -d
```

## .envファイル
### 環境変数を設定をするためのファイル(enviromentの意味)
### 以下はMYSQL_ROOT_PASSWORDという環境変数にrootを代入しておくなどしている。これはenvファイルに格納してセキュリティ上安全な面でここに保存している。
```.env
MYSQL_ROOT_PASSWORD=root
MYSQL_DATABASE=workbook
MYSQL_USER=root
MYSQL_PASSWORD=root
```

## Dockerfile
### コンテナの構築手順を記述するファイル
```Dockerfile
FROM mysql:8.0-debian
RUN apt-get update && \
    apt-get install -y locales
RUN locale-gen ja_JP.UTF-8
RUN localedef -f UTF-8 -i ja_JP ja_JP.UTF-8
ENV LANG=ja_JP.UTF-8
ENV TZ=Asia/Tokyo
```
- ### ベースイメージの指定->mysql8.0を指定

      FROM mysql:8.0-debian

- ### ロケール関連のパッケージをインストール ->Debianベースのイメージは、標準では全てのロケール(コンピュータの言語や地域設定を管理する仕組み)が有効になっていない。なのでlocalesパッケージを導入すると「locale-gen」を扱えるようになる

      RUN apt-get update && \
          apt-get install -y locales


- ### ロケールの設定 -> jaJP.UTF-8のロケールを設定、localedefで日本語のロケールをより明確に

      RUN locale-gen ja_JP.UTF-8
      RUN localedef -f UTF-8 -i ja_JP ja_JP.UTF-8

- ### 最終的な環境変数の設定 ->

      ENV LANG=ja_JP.UTF-8
      ENV TZ=Asia?Tokyo

## docker-compose.yml

```
version: '3.7' <-バージョンの指定はなくてもOK
services:
  db:
    build: .
    # platform: linux/amd64
    ports:
      - 3307:3307
    volumes:
      - ./db/data:/var/lib/mysql
    environment:
      MYSQL_ROOT_PASSWORD: ${MYSQL_ROOT_PASSWORD}
      MYSQL_DATABASE: ${MYSQL_DATABASE}
      MYSQL_USER: ${MYSQL_USER}
      MYSQL_PASSWORD: ${MYSQL_PASSWORD}
```
## buildは、
## volumes
### データの永続化をするための設定。ここで指定したパスのファイルをdockerを消しても消えないようにする
## enviroment
### .envで設定した環境変数を読み取る

## コマンド一覧
```
<<コンテナ管理系>>
docker ps : 実行中のコンテナを一覧表示
docker stop コンテナ名 : コンテナを停止
docker start コンテナ名 : コンテナを起動
docker rm コンテナ名 : コンテナを削除
docker logs コンテナ名 : コンテナのログを表示
<<イメージ管理>>
docker images : ローカルにあるDockerイメージを一覧表示
docker pull イメージ名 : Docker Hubからイメージを取得
docker build -t イメージ名 : Dockerfileからイメージを作成
docker rmi イメージ名 : イメージを削除
```

## Rails7.13とMySQLを組み合わせた環境を作る
#### 参照元
![URL](https://zenn.dev/kei1232/articles/0fac51829570c1)

### Webコンテナの中でコマンドを実行及び、現在のディレクトリでrails newを実行する
### ※ -fで既存のファイルがあっても強制上書き
### ※ -d mysqlはデータベースをMySQLで設定
### ※ -TはRSpecなどのテストフレームワークを追加しない
```
docker-compose exec web rails new . -f -d mysql -T
```

```Dockerfile.dev```
```Dockerfile
FROM ruby:3.2.3

# コンテナの作業ディレクトリ
WORKDIR /app

# コンテナの作業ディレクトリにコピー
COPY Gemfile Gemfile.lock /app/

# 依存関係をインストール
RUN bundle install

COPY entrypoint.sh /usr/bin/
# プロジェクト作成時はコメントアウト（コンテナが立ち上がらないため）
RUN chmod +x /usr/bin/entrypoint.sh
ENTRYPOINT ["entrypoint.sh"]

# ここでポート番号を指定している
EXPOSE 3001

# プロジェクト作成時はCMDをコメントアウト（コンテナが立ち上がらないため）
# ここはrails sを自動で実行してくれるとこ
CMD ["rails", "server", "-b", "0.0.0.0"]
```

