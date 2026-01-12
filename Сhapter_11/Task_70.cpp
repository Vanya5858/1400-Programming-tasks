#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 28;
    double rain[days];

    cout << "Введите количество осадков за каждый день февраля:\n";
    for (int i = 0; i < days; i++) cin >> rain[i];

    int dryDays = 0;
    for (int i = 0; i < days; i++) {
        if (rain[i] == 0) dryDays++;
    }

    cout << "Количество дней без осадков: " << dryDays << endl;

    return 0;
}