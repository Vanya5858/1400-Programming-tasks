#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    double prices[n];

    cout << "Введите стоимость 1 кг для " << n << " видов конфет:\n";
    for (int i = 0; i < n; i++) cin >> prices[i];

    double minPrice = prices[0];
    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) minPrice = prices[i];
    }

    cout << "Самые дешевые конфеты стоят: " << minPrice << " за кг\n";

    return 0;
}