def country_capital_dictionary():
    """Работа со словарем стран и столиц"""
    
    countries = {
        "Россия": "Москва",
        "США": "Вашингтон",
        "Германия": "Берлин",
        "Франция": "Париж",
        "Великобритания": "Лондон",
        "Италия": "Рим",
        "Испания": "Мадрид",
        "Китай": "Пекин",
        "Япония": "Токио",
        "Канада": "Оттава",
        "Бразилия": "Бразилиа",
        "Австралия": "Канберра",
        "Индия": "Нью-Дели",
        "Южная Корея": "Сеул",
        "Мексика": "Мехико"
    }
    
    print("Выберите действие:")
    print("1 - Найти столицу по названию страны")
    print("2 - Найти страну по названию столицы")
    
    try:
        choice = int(input("Ваш выбор: "))
        
        if choice == 1:
            country = input("Введите название страны: ").strip()
            if country in countries:
                print(f"Столица {country}: {countries[country]}")
            else:
                print(f"Страна '{country}' не найдена в словаре")
                
        elif choice == 2:
            capital = input("Введите название столицы: ").strip()
            found = False
            for country, cap in countries.items():
                if cap.lower() == capital.lower():
                    print(f"Страна со столицей {capital}: {country}")
                    found = True
                    break
            if not found:
                print(f"Столица '{capital}' не найдена в словаре")
                
        else:
            print("Неверный выбор")
            
    except ValueError:
        print("Ошибка: введите число 1 или 2")

# Запуск программы
if __name__ == "__main__":
    country_capital_dictionary()
