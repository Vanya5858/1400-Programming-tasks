#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int DAYS_IN_MAY = 31;
    double precipitation;
    int countNoPrecip = 0;
    int choice;
    int continueCounting;

    cout << "Выберите случай:\n";
    cout << "1. Известно, что в какие-то дни мая осадки выпадали\n";
    cout << "2. Допускается, что осадков могло не быть ни в какой день мая\n";
    cout << "Ваш выбор (1 или 2): ";
    cin >> choice;

    continueCounting = (choice == 1) ? 1 : 1; 

    cout << "Введите количество осадков за каждый день мая (31 число): ";

    for (int day = 0; day < DAYS_IN_MAY; day++) {
        cin >> precipitation;

        countNoPrecip += (precipitation == 0) * continueCounting;

        if (choice == 1) {
            continueCounting *= (precipitation == 0);
        }

    }

    cout << "Количество первых дней мая без осадков: " << countNoPrecip;

    return 0;
}