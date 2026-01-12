#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 25;
    double times[n];

    cout << "Введите результаты " << n << " спортсменов (время в секундах):\n";
    for (int i = 0; i < n; i++) cin >> times[i];

    double bestTime = times[0];
    for (int i = 1; i < n; i++) {
        if (times[i] < bestTime) bestTime = times[i];
    }

    cout << "Результат победителя: " << bestTime << " секунд\n";

    return 0;
}