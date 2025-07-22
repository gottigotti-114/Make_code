# 数字だけを抽出
text = "電話番号: 090-1234-5678, 郵便番号: 〒160-0022"
pattern = /\d+/
text.scan(pattern) do |s|
  puts s
end
