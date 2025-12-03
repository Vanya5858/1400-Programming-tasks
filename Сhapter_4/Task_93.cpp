#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;
    cout << "Введите день года (1-365): ";
    cin >> k;

    // а) 1 января - понедельник
    int day_of_week_a = (k - 1) % 7;

    cout << "а) 1 января - понедельник:\n";
    if (day_of_week_a == 5) {
        cout << k << "-й день года - суббота\n";
    }
    else if (day_of_week_a == 6) {
        cout << k << "-й день года - воскресенье\n";
    }
    else {
        cout << k << "-й день года - рабочий день\n";
    }

    // б) 1 января - d-й день недели
    int d;
    cout << "\nВведите день недели 1 января (1-пн, 2-вт, ..., 7-вс): ";
    cin >> d;

    int day_of_week_b = (k - 1 + d - 1) % 7;

    cout << "б) 1 января - " << d << "-й день недели:\n";
    if (day_of_week_b == 5) {
        cout << k << "-й день года - суббота\n";
    }
    else if (day_of_week_b == 6) {
        cout << k << "-й день года - воскресенье\n";
    }
    else {
        cout << k << "-й день года - рабочий день\n";
    }

    return 0;
}