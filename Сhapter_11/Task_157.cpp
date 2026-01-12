#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    double prices[n];

    cout << "Введите стоимость " << n << " видов товара:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << "\nИсходные цены: ";
    for (int i = 0; i < n; i++) cout << prices[i] << " ";
    cout << endl;

    int k;
    cout << "\nВведите номер товара, который прекращают продавать (1-" << n << "): ";
    cin >> k;

    if (k >= 1 && k <= n) {
        // Удаляем k-й элемент
        for (int i = k - 1; i < n - 1; i++) {
            prices[i] = prices[i + 1];
        }
        prices[n - 1] = 0;

        cout << "Цены оставшихся товаров: ";
        for (int i = 0; i < n; i++) {
            if (prices[i] != 0) {
                cout << prices[i] << " ";
            }
        }
        cout << endl;
    }
    else {
        cout << "Неверный номер товара!\n";
    }

    return 0;
}