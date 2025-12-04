#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;
    cout << "Введите номер карты (6-14): ";
    cin >> k;

    switch (k) {
    case 6: cout << "шестерка"; break;
    case 7: cout << "семерка"; break;
    case 8: cout << "восьмерка"; break;
    case 9: cout << "девятка"; break;
    case 10: cout << "десятка"; break;
    case 11: cout << "валет"; break;
    case 12: cout << "дама"; break;
    case 13: cout << "король"; break;
    case 14: cout << "туз"; break;
    default: cout << "Ошибка: введите число от 6 до 14";
    }
    return 0;
}