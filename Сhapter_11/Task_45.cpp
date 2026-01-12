#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 12;
    double price[n];

    cout << "Введите стоимость каждого из " << n << " предметов:\n";
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    double total = 0;
    for (int i = 0; i < n; i++) total += price[i];

    cout << "Общая стоимость всех предметов: " << total << " руб.\n";
    return 0;
}