def countries_information_system():
    """Информационная система о государствах Европы и Азии"""
    
    countries = [
        {
            "name": "Россия",
            "capital": "Москва",
            "continent": "Европа/Азия",
            "population": 146.7,  # млн чел.
            "area": 17098.2  # тыс. кв. км
        },
        {
            "name": "Германия",
            "capital": "Берлин",
            "continent": "Европа",
            "population": 83.2,
            "area": 357.0
        },
        {
            "name": "Франция",
            "capital": "Париж",
            "continent": "Европа",
            "population": 65.3,
            "area": 551.7
        },
        {
            "name": "Великобритания",
            "capital": "Лондон",
            "continent": "Европа",
            "population": 67.9,
            "area": 242.5
        },
        {
            "name": "Италия",
            "capital": "Рим",
            "continent": "Европа",
            "population": 60.4,
            "area": 301.3
        },
        {
            "name": "Испания",
            "capital": "Мадрид",
            "continent": "Европа",
            "population": 47.4,
            "area": 505.4
        },
        {
            "name": "Китай",
            "capital": "Пекин",
            "continent": "Азия",
            "population": 1402.0,
            "area": 9596.9
        },
        {
            "name": "Индия",
            "capital": "Нью-Дели",
            "continent": "Азия",
            "population": 1380.0,
            "area": 3287.3
        },
        {
            "name": "Япония",
            "capital": "Токио",
            "continent": "Азия",
            "population": 125.8,
            "area": 377.9
        },
        {
            "name": "Южная Корея",
            "capital": "Сеул",
            "continent": "Азия",
            "population": 51.7,
            "area": 100.2
        },
        {
            "name": "Турция",
            "capital": "Анкара",
            "continent": "Азия/Европа",
            "population": 84.3,
            "area": 783.6
        },
        {
            "name": "Казахстан",
            "capital": "Нур-Султан",
            "continent": "Азия",
            "population": 18.8,
            "area": 2724.9
        }
    ]
    
    # Преобразуем в словарь для быстрого поиска по названию
    countries_dict = {country["name"]: country for country in countries}
    capitals_dict = {country["capital"]: country["name"] for country in countries}
    
    while True:
        print("\n" + "="*50)
        print("ИНФОРМАЦИОННАЯ СИСТЕМА О ГОСУДАРСТВАХ")
        print("="*50)
        print("1. Определить столицу по названию государства")
        print("2. Определить государство по столице")
        print("3. Вывести всю информацию о заданном государстве")
        print("4. Вывести страны заданной части света")
        print("5. Рассчитать плотность населения для каждого государства")
        print("6. Определить количество стран в заданной части света")
        print("7. Рассчитать общую площадь стран в заданной части света")
        print("0. Выход")
        print("="*50)
        
        try:
            choice = int(input("Выберите действие (0-7): "))
            
            if choice == 0:
                print("Выход из программы...")
                break
                
            elif choice == 1:
                country_name = input("Введите название государства: ").strip()
                if country_name in countries_dict:
                    print(f"Столица {country_name}: {countries_dict[country_name]['capital']}")
                else:
                    print(f"Государство '{country_name}' не найдено")
                    
            elif choice == 2:
                capital_name = input("Введите название столицы: ").strip()
                if capital_name in capitals_dict:
                    print(f"Государство со столицей {capital_name}: {capitals_dict[capital_name]}")
                else:
                    print(f"Столица '{capital_name}' не найдена")
                    
            elif choice == 3:
                country_name = input("Введите название государства: ").strip()
                if country_name in countries_dict:
                    country = countries_dict[country_name]
                    print(f"\nИнформация о {country['name']}:")
                    print(f"  Столица: {country['capital']}")
                    print(f"  Часть света: {country['continent']}")
                    print(f"  Население: {country['population']} млн чел.")
                    print(f"  Площадь: {country['area']} тыс. кв. км")
                else:
                    print(f"Государство '{country_name}' не найдено")
                    
            elif choice == 4:
                continent = input("Введите часть света (Европа или Азия): ").strip()
                found_countries = [c["name"] for c in countries if continent in c["continent"]]
                
                if found_countries:
                    print(f"\nСтраны в части света '{continent}':")
                    for country in found_countries:
                        print(f"  - {country}")
                else:
                    print(f"Стран в части света '{continent}' не найдено")
                    
            elif choice == 5:
                print("\nПлотность населения (тыс. чел. на 1 кв. км):")
                print("="*45)
                for country in countries:
                    density = country["population"] / country["area"]  # млн/тыс = тыс/кв.км
                    print(f"{country['name']:15} {density:.2f} тыс. чел./кв. км")
                    
            elif choice == 6:
                continent = input("Введите часть света (Европа или Азия): ").strip()
                count = sum(1 for c in countries if continent in c["continent"])
                print(f"Количество стран в части света '{continent}': {count}")
                
            elif choice == 7:
                continent = input("Введите часть света (Европа или Азия): ").strip()
                total_area = sum(c["area"] for c in countries if continent in c["continent"])
                print(f"Общая площадь стран в части света '{continent}': {total_area:.1f} тыс. кв. км")
                
            else:
                print("Неверный выбор. Попробуйте снова.")
                
        except ValueError:
            print("Ошибка: введите число от 0 до 7")

# Запуск программы
if __name__ == "__main__":
    countries_information_system()
