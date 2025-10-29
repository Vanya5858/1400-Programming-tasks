#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "Введите двузначное число: ";
    cin >> number;

    // Проверка и расчет в одном блоке
    if (number >= 10 && number <= 99) {
        int sum = (number / 10) + (number % 10);
        cout << "Сумма цифр числа " << number << " равна: " << sum << endl;
    }
    else {
        cout << "Ошибка! Введите двузначное число (10-99)\n";
    }

    return 0;
}