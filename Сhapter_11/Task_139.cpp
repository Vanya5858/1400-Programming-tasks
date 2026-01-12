#include <iostream>
#include <climits>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 30;
    double prices[n];

    cout << "Введите стоимость " << n << " видов товара:\n";
    for (int i = 0; i < n; i++) cin >> prices[i];

    double max1 = -1, max2 = -1;

    for (int i = 0; i < n; i++) {
        if (prices[i] > max1) {
            max2 = max1;
            max1 = prices[i];
        }
        else if (prices[i] > max2 && prices[i] < max1) {
            max2 = prices[i];
        }
        else if (prices[i] == max1 && max2 == -1) {
            max2 = prices[i];
        }
    }

    cout << "Два самых дорогих товара: " << max1 << " и " << max2 << endl;

    return 0;
}