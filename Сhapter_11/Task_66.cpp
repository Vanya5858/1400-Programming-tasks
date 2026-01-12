#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 28;
    double rain[days];

    cout << "Введите количество осадков за каждый день февраля:\n";
    for (int i = 0; i < days; i++) cin >> rain[i];

    double sumEven = 0, sumOdd = 0;
    for (int i = 1; i < days; i += 2) sumEven += rain[i]; // чётные дни
    for (int i = 0; i < days; i += 2) sumOdd += rain[i];  // нечётные дни

    if (sumEven > sumOdd)
        cout << "По чётным числам осадков больше.\n";
    else if (sumEven < sumOdd)
        cout << "По нечётным числам осадков больше.\n";
    else
        cout << "Осадков поровну.\n";

    return 0;
}