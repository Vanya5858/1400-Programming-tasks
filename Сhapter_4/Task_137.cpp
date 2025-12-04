#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int month;
    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    if (month == 2)
        cout << "28 дней";
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        cout << "30 дней";
    else if (month >= 1 && month <= 12)
        cout << "31 день";
    else
        cout << "Ошибка: введите число от 1 до 12";

    return 0;
}