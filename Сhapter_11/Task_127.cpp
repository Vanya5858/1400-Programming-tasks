#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 60;
    double prices[n];

    cout << "Введите стоимость " << n << " книг:\n";
    for (int i = 0; i < n; i++) cin >> prices[i];

    double minPrice = prices[0];
    int minCount = 1;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
            minCount = 1;
        }
        else if (prices[i] == minPrice) {
            minCount++;
        }
    }

    cout << "Самая низкая цена: " << minPrice << endl;
    cout << "Количество самых дешевых книг: " << minCount << endl;

    return 0;
}