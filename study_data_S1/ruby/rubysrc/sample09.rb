print "学科の点数を入力"
gakka = gets.to_i
print "実技の点数を入力"
jitugi = gets.to_i

if gakka >= 70 && jitugi >= 70 && gakka + jitugi >= 150
    print "合格"
elsif gakka >= 80 || jitugi >= 80
    print "一部合格"
else
    print "不合格"
end