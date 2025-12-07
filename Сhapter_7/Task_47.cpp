#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double price, total = 0;

    cout << "Введите цены товаров (завершите ввод числом 0 или отрицательным): ";

    while (true) {
        cin >> price;
        if (price <= 0) break;
        if (price > 1000)
            total += price;
    }

    cout << "Общая стоимость товаров дороже 1000 рублей = " << total;
    return 0;
}