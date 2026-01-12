#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int days;
    cout << "Количество дней: ";
    cin >> days;

    double precipitation[31]; // максимально 31 день
    double temperature[31];

    cout << "Введите данные за каждый день:\n";
    for (int i = 0; i < days; i++) {
        cout << "День " << i + 1 << ":\n";
        cout << "  Осадки (мм): ";
        cin >> precipitation[i];
        cout << "  Температура (°C): ";
        cin >> temperature[i];
    }

    double rain = 0, snow = 0;

    for (int i = 0; i < days; i++) {
        if (temperature[i] > 0) {
            rain += precipitation[i];
        }
        else {
            snow += precipitation[i];
        }
    }

    cout << "\nРезультат:\n";
    cout << "Дождь: " << rain << " мм\n";
    cout << "Снег: " << snow << " мм\n";
    cout << "Всего осадков: " << rain + snow << " мм\n";

    return 0;
}