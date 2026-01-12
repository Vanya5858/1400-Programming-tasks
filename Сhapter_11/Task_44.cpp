#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double rain[days];

    cout << "Введите количество осадков за каждый день января (" << days << " чисел):\n";
    for (int i = 0; i < days; i++) {
        cin >> rain[i];
    }

    double total = 0;
    for (int i = 0; i < days; i++) total += rain[i];

    cout << "Общее количество осадков за январь: " << total << " мм\n";
    return 0;
}