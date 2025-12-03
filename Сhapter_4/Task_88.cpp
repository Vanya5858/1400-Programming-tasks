#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int birth_year, birth_month;
    int current_year, current_month;

    cout << "Введите год и месяц рождения: ";
    cin >> birth_year >> birth_month;
    cout << "Введите текущий год и месяц: ";
    cin >> current_year >> current_month;

    int full_years = current_year - birth_year;
    int full_months;

    if (current_month >= birth_month) {
        full_months = current_month - birth_month;
    }
    else {
        full_years--;
        full_months = 12 - birth_month + current_month;
    }

    cout << "Возраст: " << full_years << " лет и " << full_months << " месяцев\n";

    return 0;
}