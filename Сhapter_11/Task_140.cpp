#include <iostream>
#include <climits>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 22;
    double times[n];

    cout << "Введите результаты " << n << " спортсменов (время в секундах):\n";
    for (int i = 0; i < n; i++) cin >> times[i];

    double min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (times[i] < min1) {
            min2 = min1;
            min1 = times[i];
        }
        else if (times[i] < min2 && times[i] > min1) {
            min2 = times[i];
        }
        else if (times[i] == min1 && min2 == INT_MAX) {
            min2 = times[i];
        }
    }

    cout << "Первое место: " << min1 << " секунд\n";
    cout << "Второе место: " << min2 << " секунд\n";

    return 0;
}