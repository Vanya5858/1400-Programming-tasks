#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    // Ввод двузначного числа
    cout << "Введите двузначное число: ";
    cin >> number;

    // Проверка, что число действительно двузначное
    if (number < 10 || number > 99) {
        cout << "Ошибка! Введите двузначное число (10-99)" << endl;
        return 1;
    }

    // а) Находим число десятков
    int tens = number / 10;

    // б) Находим число единиц
    int units = number % 10;

    // Вывод результатов
    cout << "а) Число десятков: " << tens << endl;
    cout << "б) Число единиц: " << units << endl;

    return 0;
}