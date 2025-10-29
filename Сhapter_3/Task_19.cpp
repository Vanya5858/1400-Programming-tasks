#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "Введите трехзначное число: ";
    cin >> number;

    if (number >= 100 && number <= 999) {
        int digit1 = number / 100;                    // сотни
        int digit2 = (number % 100) / 10;             // десятки
        int digit3 = number % 10;                     // единицы

        cout << digit1 << ", " << digit2 << ", " << digit3 << endl;
    }
    else {
        cout << "Ошибка! Введите трехзначное число (100-999)\n";
    }

    return 0;
}