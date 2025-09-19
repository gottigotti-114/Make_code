require "./Items"
require "./Resheets"
# 以下を出力するための最適なクラスを作成

# 倉庫名：斐川
# 品名　前月残　入庫　出庫　廃棄　残数
# ペン　２０　　３０　４０　０　　１０
# 筆箱　３０　　０　　２０　１　　９
# 赤ペン５０　　１０　５５　０　　５
# 総計　１００　４０　１１５１　　２２４

# 倉庫名：出雲
# 品名　前月残　入庫　出庫　廃棄　残数
# 筆箱　６０　　４０　７０　０　　３０
# 赤ペン５０　　３０　２０　０　　６０
# 総計　１１０　７０　９０　０　　９０

resheet = [
    Resheets.new("斐川",[
        Items.new("ペン",20,30,40,0),
        Items.new("筆箱",30,0,20,1),
        Items.new("赤ペン",50,10,55,0)
    ]),
    Resheets.new("出雲",[
        Items.new("筆箱",60,40,70,0),
        Items.new("赤ペン",50,30,20,0)
    ])
]

resheet.each do |records|
    puts "倉庫名：#{records.house_name}"
    puts "品名\t前月残\t入庫\t出庫\t廃棄\t残数"
    records.records.each do |items|
        puts "#{items.name}\t#{items.before_cnt}\t#{items.in_cnt}\t#{items.out_cnt}\t#{items.trash}\t#{items.cnt}"
    end
    puts "#{records.soukei.name}\t#{records.soukei.before_cnt}\t#{records.soukei.in_cnt}\t#{records.soukei.out_cnt}\t#{records.soukei.trash}\t#{records.soukei.cnt}"
    puts
end
