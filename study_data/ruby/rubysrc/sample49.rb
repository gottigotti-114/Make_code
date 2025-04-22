#問題１
arr = [
    {name: "田中", age: 20},
    {name: "山田", age: 30},
    {name: "中山", age: 40}
]

arr.each do |text|
    puts "#{text[:name]}さんは#{text[:age]}歳です"  #name: や age:は色が変わって通るように見えるが、コンパイルエラーになるので注意
end