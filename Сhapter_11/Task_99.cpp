#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double rain[days];

    cout << "Введите количество осадков за каждый день января:\n";
    for (int i = 0; i < days; i++) cin >> rain[i];

    double sum = 0;
    for (int i = 0; i < days; i++) sum += rain[i];
    double avg = sum / days;

    int count = 0;
    cout << "Дни с осадками выше среднего (" << avg << " мм): ";
    for (int i = 0; i < days; i++) {
        if (rain[i] > avg) {
            cout << i + 1 << " ";
            count++;
        }
    }

    if (count == 0) cout << "нет";
    cout << endl << "Количество таких дней: " << count << endl;

    return 0;
}