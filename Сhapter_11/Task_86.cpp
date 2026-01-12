#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double rain[days];

    cout << "Введите количество осадков за каждый день марта:\n";
    for (int i = 0; i < days; i++) cin >> rain[i];

    int dryDays = 0;
    for (int i = 0; i < days; i++) {
        if (rain[i] == 0) dryDays++;
    }

    if (dryDays == 10)
        cout << "Осадков не было ровно 10 дней.\n";
    else
        cout << "Осадков не было " << dryDays << " дней (не 10).\n";

    return 0;
}