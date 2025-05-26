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
appのホストマシンとコンテナでファイルを共有する設定
        コンテナも簡単に消すことができる
        コンテナの中でも残したいフォルダを指定することができる
        例 volumes: - .: /appはappの下はコンテナを消しても残る

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