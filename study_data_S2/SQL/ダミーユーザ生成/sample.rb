# まず、Fakerをインストールしていない場合は、Gemfileに以下を追加して `bundle install` を実行してください。
# gem 'faker'

require 'faker'
require 'securerandom' # パスワードのハッシュ化（簡略版）に利用

# --- Fakerのロケールを日本語に設定 ---
Faker::Config.locale = 'ja'

# --- テーブル名とカラム名の設定 ---
# users テーブルに 'address' カラムが追加されていることを想定
TABLE_NAME = "users"
COLUMNS = %w[name email password_digest address created_at updated_at]

# --- ヘルパー関数（現在時刻のフォーマット） ---
def current_mysql_datetime
  Time.now.strftime('%Y-%m-%d %H:%M:%S')
end

puts "-- MySQL INSERT Statements for #{TABLE_NAME} table"
puts "-- Generated on #{current_mysql_datetime}"
puts ""

# 10人分のダミーデータを生成し、INSERT文を出力
10.times do |i|
  # ダミーデータの生成
  # 日本人の漢字の氏名を生成 (苗字 + 名前)
  last_name = Faker::Name.last_name # 姓
  first_name = Faker::Name.first_name # 名
  name = "#{last_name} #{first_name}" # フルネーム

  # 確実なアルファベットのメールアドレスを生成
  # Faker::Internet.username はロケールに依存せずアルファベット文字列を生成します。
  # これに固定のドメインを組み合わせることで、漢字を含まないメールアドレスを保証します。
  # ユニーク性を確保するため、Faker::Internet.unique を使用します。
  begin
    email_username = Faker::Internet.unique.username(specifier: 8..15) # 8〜15文字のランダムなアルファベットユーザー名
    email_domain = Faker::Internet.domain_name # 例: example.com, test.org など
    email = "#{email_username}@#{email_domain}"
  rescue Faker::UniqueGenerator::LimitExceededException
    # 万が一、ユニークなユーザー名が枯渇した場合のフォールバック
    email = "fallback_user_#{i}_#{SecureRandom.hex(4)}@example.com"
  end

  # パスワードは実際のRailsアプリケーションではbcryptなどでハッシュ化されますが、
  # ここでは簡略化のためにランダムな文字列を生成しています。
  # 実際の環境では本物のハッシュ化したパスワードを使用してください。
  password_digest = SecureRandom.hex(10) # 例: ランダムな20文字の16進数文字列

  # 日本の住所を生成 (都道府県、市区町村、番地、建物名など)
  address = "#{Faker::Address.state}#{Faker::Address.city}#{Faker::Address.street_address} #{Faker::Address.building_number}"
  # オプションで郵便番号も追加したい場合
  # address = "〒#{Faker::Address.zip_code} #{Faker::Address.state}#{Faker::Address.city}#{Faker::Address.street_address} #{Faker::Address.building_number}"

  created_at = current_mysql_datetime
  updated_at = current_mysql_datetime

  # VALUES句の値をエスケープして文字列として準備
  # MySQLの文字列リテラルはシングルクォートで囲み、内部のシングルクォートはエスケープする必要がある
  escaped_name = name.gsub("'", "''")
  escaped_email = email.gsub("'", "''")
  escaped_password_digest = password_digest.gsub("'", "''")
  escaped_address = address.gsub("'", "''")

  # INSERT文の生成
  insert_statement = <<-SQL
INSERT INTO #{TABLE_NAME} (#{COLUMNS.join(', ')})
VALUES (
  '#{escaped_name}',
  '#{escaped_email}',
  '#{escaped_password_digest}',
  '#{escaped_address}',
  '#{created_at}',
  '#{updated_at}'
);
  SQL

  puts insert_statement
end

puts ""
puts "-- End of INSERT statements"