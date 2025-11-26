#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double exchange_rate;

    // Ввод курса доллара
    cout << "Введите текущий курс доллара (руб. за 1 USD): ";
    cin >> exchange_rate;

    cout << "\nТаблица перевода USD в RUB:\n";
    cout << "Курс: 1 USD = " << fixed << setprecision(2) << exchange_rate << " RUB\n\n";
    cout << "USD    RUB\n";
    cout << "-----------\n";

    for (int dollars = 1; dollars <= 20; dollars++) {
        double rubles = dollars * exchange_rate;
        cout << dollars << "   " << fixed << setprecision(2) << setw(8) << rubles << endl;
    }

    return 0;
}