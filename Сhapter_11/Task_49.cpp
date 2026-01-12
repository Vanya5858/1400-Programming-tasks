#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 28;
    double rain[days];

    cout << "Введите количество осадков за каждый день февраля (" << days << " чисел):\n";
    for (int i = 0; i < days; i++) {
        cin >> rain[i];
    }

    double total = 0;
    for (int i = 0; i < days; i++) total += rain[i];

    cout << "Среднедневное количество осадков в феврале: " << total / days << " мм\n";
    return 0;
}