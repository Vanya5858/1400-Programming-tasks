#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    // а) Сумма цифр 4-значного числа
    cout << "а) Введите четырехзначное число: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Ошибка! Введите четырехзначное число (1000-9999)\n";
        return 1;
    }

    int digit1_4 = number / 1000;           // первая цифра
    int digit2_4 = (number / 100) % 10;     // вторая цифра
    int digit3_4 = (number / 10) % 10;      // третья цифра
    int digit4_4 = number % 10;             // четвертая цифра

    int sum4 = digit1_4 + digit2_4 + digit3_4 + digit4_4;

    cout << "Цифры: " << digit1_4 << ", " << digit2_4 << ", " << digit3_4 << ", " << digit4_4 << endl;
    cout << "Сумма цифр: " << sum4 << endl << endl;

    // б) Сумма цифр 5-значного числа
    cout << "б) Введите пятизначное число: ";
    cin >> number;

    if (number < 10000 || number > 99999) {
        cout << "Ошибка! Введите пятизначное число (10000-99999)\n";
        return 1;
    }

    int digit1_5 = number / 10000;          // первая цифра
    int digit2_5 = (number / 1000) % 10;    // вторая цифра
    int digit3_5 = (number / 100) % 10;     // третья цифра
    int digit4_5 = (number / 10) % 10;      // четвертая цифра
    int digit5_5 = number % 10;             // пятая цифра

    int sum5 = digit1_5 + digit2_5 + digit3_5 + digit4_5 + digit5_5;

    cout << "Цифры: " << digit1_5 << ", " << digit2_5 << ", " << digit3_5 << ", " << digit4_5 << ", " << digit5_5 << endl;
    cout << "Сумма цифр: " << sum5 << endl;

    return 0;
}