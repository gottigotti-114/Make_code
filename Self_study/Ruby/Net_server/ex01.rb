require 'net/http'
require 'uri'

# アクセスするURLを指定
url = URI.parse('https://www.example.com/nonexistent-page')

# HTTPリクエストを送る
response = Net::HTTP.get_response(url)

# レスポンスの内容を表示
puts "ステータスコード: #{response.code}"
puts "レスポンスボディ: #{response.body[0..200]}"  # 200文字まで表示

