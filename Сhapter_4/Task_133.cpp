#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int day;
    cout << "Введите номер дня недели (1-7): ";
    cin >> day;

    switch (day) {
    case 1: cout << "Понедельник"; break;
    case 2: cout << "Вторник"; break;
    case 3: cout << "Среда"; break;
    case 4: cout << "Четверг"; break;
    case 5: cout << "Пятница"; break;
    case 6: cout << "Суббота"; break;
    case 7: cout << "Воскресенье"; break;
    default: cout << "Ошибка: введите число от 1 до 7";
    }
    return 0;
}