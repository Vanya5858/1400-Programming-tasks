#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double precipitation, total = 0;

    cout << "Введите количество осадков за каждый день февраля (28 чисел): ";
    for (int i = 0; i < 28; i++) {
        cin >> precipitation;
        total += precipitation;
    }

    double lastYear;
    cout << "Введите общее количество осадков за прошлый год: ";
    cin >> lastYear;

    cout << (total > lastYear ? "Превысило" : "Не превысило");
    return 0;
}