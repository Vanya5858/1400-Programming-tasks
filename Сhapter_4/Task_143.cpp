#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m, n, choice;
    cout << "Введите номер месяца m (1-12): ";
    cin >> m;
    cout << "Введите число n (1-31): ";
    cin >> n;

    cout << "\nВыберите действие:\n";
    cout << "1. Найти предыдущий день\n";
    cout << "2. Найти следующий день\n";
    cout << "Ваш выбор (1 или 2): ";
    cin >> choice;

    // Дни в месяцах для невисокосного года
    int daysInMonth;
    switch (m) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        daysInMonth = 31; break;
    case 4: case 6: case 9: case 11:
        daysInMonth = 30; break;
    case 2:
        daysInMonth = 28; break;
    default:
        cout << "Ошибка в номере месяца!" << endl;
        return 1;
    }

    if (choice == 1) { // Предыдущий день
        if (n > 1) {
            n--;
        }
        else {
            m--;
            if (m == 0) m = 12;
            // Определяем дни в предыдущем месяце
            switch (m) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                n = 31; break;
            case 4: case 6: case 9: case 11:
                n = 30; break;
            case 2:
                n = 28; break;
            }
        }
        cout << "Предыдущий день: " << n << "." << m;
    }
    else if (choice == 2) { // Следующий день
        if (n < daysInMonth) {
            n++;
        }
        else {
            n = 1;
            m++;
            if (m > 12) m = 1;
        }
        cout << "Следующий день: " << n << "." << m;
    }
    else {
        cout << "Ошибка выбора!";
    }

    return 0;
}