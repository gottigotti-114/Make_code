# 問、
# キーボードからを何月を入力
# 季節を判定するクラスを作成し、以下のように出力
# 春（3～5）、夏（6～8）、秋（9～11）、冬（12～2）

# 例
# 　月：10
# 　10月は秋です。

class Season_Select
    def month_i=(val)
        @month = val
    end
    def selecter_o
        case @month
        when 3..5
            "春"
        when 6..8
            "夏"
        when 9..11
            "秋"
        when 12,1,2
            "冬"
        end
    end
    def month_o
        @month
    end
end

season = Season_Select.new

print "月："
season.month_i = gets.to_i
puts "#{season.month_o}は#{season.selecter_o}です。"