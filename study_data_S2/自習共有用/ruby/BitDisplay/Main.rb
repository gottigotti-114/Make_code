require "./Bit"
require "./Display"
require "./Tool"
require 'fileutils'

# Displayの生成
puts "ディスプレイのビット数を指定してください"
print "X:"
x = gets.to_i
print "Y:"
y = gets.to_i
display = Display.new(x,y)

tool = Tool.new(display)

puts "---コマンド入力ライン---"
command_text = ""
begin
  tool.command(command_text)
  display.print
  print "cmd>"
  command_text = gets.chomp
end while (!(command_text == "quit" || command_text == "exit"))

puts "以下が完成しました"
display.print

#============================
#次回

# 対象ディレクトリ
target_dir = "./Data"

# ファイル名の末尾番号を抽出する正規表現（例：file123.txt → 123）
pattern = /(\d+)(?=\.\w+$)/

# ファイル一覧から最大番号を取得
max_number = Dir.glob("#{target_dir}/*").map do |path|
  File.basename(path)[pattern, 1]&.to_i
end.compact.max || 0

# 新しいファイル名を生成
new_number = max_number + 1
new_filename = "file#{new_number}.txt"
new_path = File.join(target_dir, new_filename)

# 新規保存（空ファイルを作成）
File.write(new_path, "#{display.design}")

puts "新しいファイルを作成しました: #{new_filename}"
#=================================
puts
puts "終了します"

