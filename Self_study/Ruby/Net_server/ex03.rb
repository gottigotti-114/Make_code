require 'net/http'
require 'uri'

# ヘッダー情報を取得する


url = URI.parse('https://www.example.com')

# HTTPリクエストを送る
response = Net::HTTP.get_response(url)

# レスポンスヘッダーを表示
puts "ステータスコード: #{response.code}"
puts "レスポンスヘッダー:"
response.each_header { |key, value| puts "#{key}: #{value}" }