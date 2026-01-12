#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    long long number;

    cout << "Введите натуральное число: ";
    cin >> number;

    if (number < 0) {
        cout << "Число должно быть натуральным!\n";
        return 0;
    }

    // Проверяем особый случай - число 0
    if (number == 0) {
        cout << "Число: 0\n";
        cout << "Количество различных цифр: 1\n";
        cout << "Различные цифры: 0\n";
        return 0;
    }

    long long temp = number;

    // Счетчик для цифр (0-9)
    int digitCount[10] = { 0 };

    // Подсчитываем количество каждой цифры
    while (temp > 0) {
        int digit = temp % 10;
        digitCount[digit]++;
        temp /= 10;
    }

    // Подсчитываем количество различных цифр
    int uniqueDigits = 0;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            uniqueDigits++;
        }
    }

    // Вывод результатов
    cout << "\nЧисло: " << number << endl;
    cout << "Количество различных цифр: " << uniqueDigits << endl;

    // Выводим различные цифры
    cout << "Различные цифры: ";
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            cout << i << " ";
        }
    }

    // Дополнительная информация
    cout << "\n\nДетальная информация:\n";
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            cout << "Цифра " << i << " встречается " << digitCount[i] << " раз\n";
        }
    }

    return 0;
}