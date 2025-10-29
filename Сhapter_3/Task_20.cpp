#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    // Ввод трехзначного числа
    cout << "Введите трехзначное число: ";
    cin >> number;

    // Проверка, что число действительно трехзначное
    if (number < 100 || number > 999) {
        cout << "Ошибка! Введите трехзначное число (100-999)\n";
        return 1;
    }

    // Разделяем число на цифры
    int hundreds = number / 100;           // первая цифра (сотни)
    int tens = (number / 10) % 10;         // вторая цифра (десятки)
    int units = number % 10;               // третья цифра (единицы)

    // Вычисляем требуемые значения
    int sum = hundreds + tens + units;     // сумма цифр
    int product = hundreds * tens * units; // произведение цифр

    // Вывод результатов
    cout << "Исходное число: " << number << endl;
    cout << "а) Число единиц: " << units << endl;
    cout << "б) Число десятков: " << tens << endl;
    cout << "в) Сумма цифр: " << sum << endl;
    cout << "г) Произведение цифр: " << product << endl;

    return 0;
}