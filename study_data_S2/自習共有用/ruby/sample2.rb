# 郵便番号マッチング
text = "住所: 東京都港区 105-0013、旧住所: 0123-456、郵便番号: 160-0023"

pattern = /\d{3}-\d{4}/
p pattern.match(text)
p text.scan(pattern)
p "--------------------------"

# 全角カタカナ抽出
text2 = "名前: カタカナ、漢字: 山田、英語: John"
pattern = /([ア-ン]+)/
p pattern.match(text2)
p "-----------------------------"

# URL抽出
text3 = "公式サイトはこちら: https://example.com、画像リンク: http://img.site.jp/abc.png、謎文字列: httpexample"
pattern = /http(s)?:\/\/.*\.(com|png)/
arr = pattern.match(text3)
p arr
p "------------------------------"

# 電話番号の抽出
text4 = "自宅: 03-1234-5678、携帯: 090-9876-5432、不正: 0123456789"
pattern = /0(7|8|9)0-\d{4}-\d{4}/
arr = pattern.match(text4)
p arr
p "------------------------------"