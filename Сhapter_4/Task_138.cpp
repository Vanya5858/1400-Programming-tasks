#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m;
    cout << "Введите номер масти (1-4): ";
    cin >> m;

    switch (m) {
    case 1: cout << "пики"; break;
    case 2: cout << "трефы"; break;
    case 3: cout << "бубны"; break;
    case 4: cout << "червы"; break;
    default: cout << "Ошибка: введите число от 1 до 4";
    }
    return 0;
}