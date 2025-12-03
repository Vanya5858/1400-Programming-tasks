#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int birth_year, birth_month, birth_day;
    int current_year, current_month, current_day;

    cout << "Введите дату рождения (год месяц день): ";
    cin >> birth_year >> birth_month >> birth_day;
    cout << "Введите текущую дату (год месяц день): ";
    cin >> current_year >> current_month >> current_day;

    int age = current_year - birth_year;

    // Если текущий месяц меньше месяца рождения, или месяцы равны но день меньше
    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
        age--;
    }

    cout << "Возраст: " << age << " лет\n";

    return 0;
}