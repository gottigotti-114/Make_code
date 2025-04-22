day = 1
coin = 1
total = 0

while total < 100000
    print day,"日目は",coin,"円貯金して合計"
    total += coin
    coin *= 2
    day += 1
    print total,"円\n"
end/