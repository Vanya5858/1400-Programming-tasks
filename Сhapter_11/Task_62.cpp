#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 28;
    double rain[days];

    cout << "Введите количество осадков за каждый день февраля:\n";
    for (int i = 0; i < days; i++) cin >> rain[i];

    double sumEven = 0;
    for (int i = 1; i < days; i += 2) sumEven += rain[i];

    cout << "Общее число осадков по чётным числам: " << sumEven << " мм\n";

    return 0;
}