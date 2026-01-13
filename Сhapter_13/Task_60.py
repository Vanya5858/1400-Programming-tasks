def digit_frequency_analysis():
    """Анализ частоты цифр в тексте"""
    
    text = input("Введите текст: ")
    
    # Вариант 1: Частота каждой имеющейся в тексте цифры
    digit_frequency = {}
    
    # Вариант 2: Частота каждой из цифр (0-9), включая отсутствующие
    all_digits_frequency = {str(i): 0 for i in range(10)}
    
    # Анализируем текст
    for char in text:
        if char.isdigit():
            # Вариант 1
            digit_frequency[char] = digit_frequency.get(char, 0) + 1
            
            # Вариант 2
            all_digits_frequency[char] += 1
    
    print("\n1) Частота каждой имеющейся в тексте цифры:")
    print("==========================================")
    if digit_frequency:
        for digit in sorted(digit_frequency.keys()):
            print(f"   Цифра '{digit}': {digit_frequency[digit]} раз")
    else:
        print("   В тексте нет цифр")
    
    print("\n2) Частота каждой из цифр (0-9):")
    print("================================")
    for digit in sorted(all_digits_frequency.keys()):
        count = all_digits_frequency[digit]
        print(f"   Цифра {digit}: {count} раз")
    
    # Статистика
    total_digits = sum(digit_frequency.values())
    different_digits = len(digit_frequency)
    
    print("\nСтатистика:")
    print(f"   Всего цифр в тексте: {total_digits}")
    print(f"   Разных цифр: {different_digits}")
    
    if digit_frequency:
        most_frequent = max(digit_frequency.items(), key=lambda x: x[1])
        least_frequent = min(digit_frequency.items(), key=lambda x: x[1])
        print(f"   Наиболее частая цифра: '{most_frequent[0]}' ({most_frequent[1]} раз)")
        print(f"   Наименее частая цифра: '{least_frequent[0]}' ({least_frequent[1]} раз)")

# Запуск программы
if __name__ == "__main__":
    digit_frequency_analysis()
