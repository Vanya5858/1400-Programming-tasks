#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    double prices[n];

    cout << "Введите стоимость " << n << " видов товара:\n";
    for (int i = 0; i < n; i++) cin >> prices[i];

    double sum = 0;
    for (int i = 0; i < n; i++) sum += prices[i];
    double avg = sum / n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (prices[i] < avg) count++;
    }

    cout << "Средняя стоимость: " << avg << endl;
    cout << "Видов товара дешевле средней стоимости: " << count << endl;

    return 0;
}