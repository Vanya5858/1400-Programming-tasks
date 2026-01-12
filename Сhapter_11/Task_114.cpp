#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 50;
    double prices[n];

    cout << "Введите стоимость " << n << " марок автомобилей:\n";
    for (int i = 0; i < n; i++) cin >> prices[i];

    double maxPrice = prices[0];
    for (int i = 1; i < n; i++) {
        if (prices[i] > maxPrice) maxPrice = prices[i];
    }

    cout << "Самый дорогой автомобиль стоит: " << maxPrice << endl;

    return 0;
}