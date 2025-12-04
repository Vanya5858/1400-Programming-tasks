#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int choice, month, year;

    cout << "Выберите вариант решения:\n";
    cout << "1. Год не является високосным (по умолчанию)\n";
    cout << "2. Год может быть високосным\n";
    cout << "Ваш выбор (1 или 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Введите номер месяца (1-12): ";
        cin >> month;

        switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 день"; break;
        case 4: case 6: case 9: case 11:
            cout << "30 дней"; break;
        case 2:
            cout << "28 дней"; break;
        default:
            cout << "Ошибка: введите число от 1 до 12";
        }
    }
    else if (choice == 2) {
        cout << "Введите номер месяца (1-12): ";
        cin >> month;
        cout << "Введите год: ";
        cin >> year;

        bool leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

        switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 день"; break;
        case 4: case 6: case 9: case 11:
            cout << "30 дней"; break;
        case 2:
            if (leap) cout << "29 дней";
            else cout << "28 дней";
            break;
        default:
            cout << "Ошибка: введите число от 1 до 12";
        }
    }
    else {
        cout << "Ошибка: выберите 1 или 2";
    }

    return 0;
}