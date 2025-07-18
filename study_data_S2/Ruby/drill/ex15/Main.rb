# 日付のチェック
def mat(str)
  if /(0[1-9]|[1-2][0-9]|3[0-1])/ =~ str
    puts "マッチしました：#{str}"
  end
end

4.times do |i|
  10.times do |j|
    mat("#{i}#{j}")
  end
end