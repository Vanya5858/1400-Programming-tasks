#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double temperature;
    int daysBelow0 = 0;
    int daysInMonth;

    cout << "Введите количество дней в месяце: ";
    cin >> daysInMonth;
    cout << "Введите температуру за каждый день: ";

    for (int day = 1; day <= daysInMonth; day++) {
        cin >> temperature;
        if (temperature < 0)
            daysBelow0++;
    }

    cout << "Температура опускалась ниже 0°С в " << daysBelow0 << " днях";
    return 0;
}