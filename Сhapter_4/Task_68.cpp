#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int year;
    cout << "Введите год: ";
    cin >> year;

    bool is_leap = false;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                is_leap = true;
            }
        }
        else {
            is_leap = true;
        }
    }

    if (is_leap) {
        cout << year << " год високосный\n";
    }
    else {
        cout << year << " год не високосный\n";
    }

    return 0;
}