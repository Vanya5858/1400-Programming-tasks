#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 30;
    double rain[days];

    cout << "Введите количество осадков за каждый день июня (" << days << " чисел):\n";
    for (int i = 0; i < days; i++) {
        cin >> rain[i];
    }

    double decade1 = 0, decade2 = 0, decade3 = 0;
    for (int i = 0; i < 10; i++) decade1 += rain[i];
    for (int i = 10; i < 20; i++) decade2 += rain[i];
    for (int i = 20; i < 30; i++) decade3 += rain[i];

    cout << "Осадки за 1-ю декаду: " << decade1 << " мм\n";
    cout << "Осадки за 2-ю декаду: " << decade2 << " мм\n";
    cout << "Осадки за 3-ю декаду: " << decade3 << " мм\n";

    return 0;
}