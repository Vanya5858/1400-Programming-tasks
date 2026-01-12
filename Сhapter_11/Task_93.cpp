#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int cars = 10, bikes = 5;
    double carPrices[cars], bikePrices[bikes];

    cout << "Введите стоимость " << cars << " марок автомобилей:\n";
    for (int i = 0; i < cars; i++) cin >> carPrices[i];

    cout << "Введите стоимость " << bikes << " марок мотоциклов:\n";
    for (int i = 0; i < bikes; i++) cin >> bikePrices[i];

    double sumCars = 0, sumBikes = 0;
    for (int i = 0; i < cars; i++) sumCars += carPrices[i];
    for (int i = 0; i < bikes; i++) sumBikes += bikePrices[i];

    double avgCars = sumCars / cars;
    double avgBikes = sumBikes / bikes;

    if (avgCars > 3 * avgBikes)
        cout << "Средняя стоимость автомобилей превышает среднюю стоимость мотоциклов более чем в 3 раза.\n";
    else
        cout << "Средняя стоимость автомобилей не превышает среднюю стоимость мотоциклов в 3 раза.\n";

    return 0;
}