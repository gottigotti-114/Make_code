require 'net/http'
require 'uri'

# POSTリクエストを送る


url = URI.parse('https://httpbin.org/post') # テスト用API
params = { name: "Alice", age: 30 }

# HTTP POSTリクエストの送信
response = Net::HTTP.post_form(url, params)

# レスポンスの内容を表示
puts "ステータスコード: #{response.code}"
puts "レスポンスボディ: #{response.body[0..200]}"