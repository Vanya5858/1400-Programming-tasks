#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int year1, month1, day1; // первый человек
    int year2, month2, day2; // второй человек

    cout << "Введите дату рождения первого (год месяц день): ";
    cin >> year1 >> month1 >> day1;
    cout << "Введите дату рождения второго (год месяц день): ";
    cin >> year2 >> month2 >> day2;

    // Сравниваем по годам
    if (year1 < year2) {
        cout << "Первый человек старше\n";
    }
    else if (year1 > year2) {
        cout << "Второй человек старше\n";
    }
    else {
        // Годы равны, сравниваем месяцы
        if (month1 < month2) {
            cout << "Первый человек старше\n";
        }
        else if (month1 > month2) {
            cout << "Второй человек старше\n";
        }
        else {
            // Месяцы равны, сравниваем дни
            if (day1 < day2) {
                cout << "Первый человек старше\n";
            }
            else if (day1 > day2) {
                cout << "Второй человек старше\n";
            }
            else {
                cout << "Одного возраста\n";
            }
        }
    }

    return 0;
}