#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int DAYS = 28; // февраль
    double shop1[DAYS], shop2[DAYS];

    cout << "Доход первого магазина (28 дней):\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "День " << i + 1 << ": ";
        cin >> shop1[i];
    }

    cout << "\nДоход второго магазина (28 дней):\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "День " << i + 1 << ": ";
        cin >> shop2[i];
    }

    double total1 = 0, total2 = 0;

    for (int i = 0; i < DAYS; i++) {
        total1 += shop1[i];
        total2 += shop2[i];
    }

    cout << "\nРезультат:\n";
    cout << "Магазин 1: " << total1 << endl;
    cout << "Магазин 2: " << total2 << endl;

    if (total1 < total2) {
        cout << "Меньший доход у магазина 1\n";
    }
    else if (total2 < total1) {
        cout << "Меньший доход у магазина 2\n";
    }
    else {
        cout << "Доходы равны\n";
    }

    return 0;
}