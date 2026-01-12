#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 30;
    double prices[n];

    cout << "Введите стоимость 1 кг " << n << " видов конфет:\n";
    for (int i = 0; i < n; i++) cin >> prices[i];

    double minPrice = prices[0];
    int firstIndex = 0, lastIndex = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
            firstIndex = i;
            lastIndex = i;
        }
        else if (prices[i] == minPrice) {
            lastIndex = i;
        }
    }

    cout << "Самая дешевая цена: " << minPrice << " за кг\n";
    cout << "Порядковый номер первого: " << firstIndex + 1 << endl;
    cout << "Порядковый номер последнего: " << lastIndex + 1 << endl;

    return 0;
}