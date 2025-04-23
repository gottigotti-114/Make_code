def the_animals()
    puts "🐈🐶🐙🦒🐘🦌🐻🌰🍌🍎🦍🦛🍈🍓"
end

def the_animals_selecter(key)
    animals = {
        dog: "🐶",
        cat: "🐈",
        banana: "🍌",
        octpath: "🐙",
        elephant: "🐘",
        melon: "🍈",
        sika: "🦌",
        apple: "🍎",
        maron: "🌰"
    }

    
    puts animals[key]
end

key = gets.chomp.to_sym
the_animals_selecter(key)
the_animals()


