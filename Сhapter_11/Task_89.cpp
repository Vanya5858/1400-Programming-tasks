#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double rain[days];

    cout << "Введите количество осадков за каждый день августа:\n";
    for (int i = 0; i < days; i++) cin >> rain[i];

    double sum = 0;
    int count = 0;
    for (int i = 0; i < days; i++) {
        if (rain[i] > 0) {
            sum += rain[i];
            count++;
        }
    }

    if (count > 0)
        cout << "Среднее количество осадков в дождливые дни: " << sum / count << " мм\n";
    else
        cout << "Не было дождливых дней.\n";

    return 0;
}