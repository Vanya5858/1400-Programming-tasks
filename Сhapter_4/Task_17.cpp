#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int birth_year, birth_month, current_year, current_month;
    cout << "Введите год и месяц рождения: ";
    cin >> birth_year >> birth_month;
    cout << "Введите текущий год и месяц: ";
    cin >> current_year >> current_month;

    int age = current_year - birth_year;
    if (current_month < birth_month) {
        age--;
    }

    cout << "Возраст: " << age << " лет\n";
    return 0;
}