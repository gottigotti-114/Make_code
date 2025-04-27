require 'net/http'
require 'uri'
require 'json'

# JSONデータを取得する


url = URI.parse('https://api.github.com/repos/ruby/ruby')

# GETリクエストを送る
response = Net::HTTP.get_response(url)

# JSONデータをパース
data = JSON.parse(response.body)

# 特定のキーを表示
puts "リポジトリ名: #{data['name']}"
puts "説明: #{data['description']}"