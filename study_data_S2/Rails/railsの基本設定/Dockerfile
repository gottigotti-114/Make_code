#Docker Hubからruby:3.0.5のイメージをプルする
FROM ruby:3.0.5

#debian系のためapt-getを使用してnode.jsとyarnをインストール
RUN apt-get update -qq
RUN curl -fsSL https://deb.nodesource.com/setup_lts.x | bash - \
&& apt-get install -y nodejs
RUN npm install --global yarn

#docker内の作業ディレクトリを作成＆設定
WORKDIR /docker_rails_test

# Bundler安定化
RUN gem install bundler

#Gemfile,Gemfile.lockをローカルからCOPY
COPY Gemfile Gemfile.lock /docker_rails_test/

#コンテナ内にコピーしたGemfileを用いてbundel install
RUN bundle install

# database.yml をテンプレートからコピー
COPY config/database.yml.template config/database.yml

# Loggerバグ対策
ENV RUBYOPT="-rlogger"

#railsを起動する
CMD ["rails", "server", "-b", "0.0.0.0"]
