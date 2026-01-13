#include <iostream>
using namespace std;

struct Price {
    int rubles;
    int kopecks;
};

void comparePrices(Price p1, Price p2) {
    int total1 = p1.rubles * 100 + p1.kopecks;
    int total2 = p2.rubles * 100 + p2.kopecks;

    if (total1 > total2) {
        cout << "Первый товар дороже" << endl;
    }
    else if (total1 < total2) {
        cout << "Второй товар дороже" << endl;
    }
    else {
        cout << "Товары стоят одинаково" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Price products[20] = {
        {100, 50}, {200, 0}, {150, 75}, {80, 30}, {120, 90},
        {300, 45}, {75, 99}, {180, 20}, {250, 0}, {95, 10},
        {130, 60}, {210, 15}, {175, 80}, {90, 25}, {140, 70},
        {220, 40}, {110, 55}, {190, 5}, {160, 85}, {135, 65}
    };

    // Сравниваем первый и второй товары
    comparePrices(products[0], products[1]);

    // Можно сравнивать любые два товара
    cout << "\nСравнение 5-го и 10-го товаров:" << endl;
    comparePrices(products[4], products[9]);

    return 0;
}