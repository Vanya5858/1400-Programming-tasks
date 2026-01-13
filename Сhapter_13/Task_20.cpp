#include <iostream>
#include <string>
using namespace std;

struct Car {
    string model;
    int power;     // мощность в л.с.
    double price;  // цена в тыс. руб.
};

double totalPriceHighPowerCars(Car cars[], int n, int minPower) {
    double total = 0.0;

    for (int i = 0; i < n; i++) {
        if (cars[i].power > minPower) {
            total += cars[i].price;
        }
    }

    return total;
}

int main() {
    setlocale(LC_ALL, "RU");

    Car cars[30] = {
        {"Toyota Camry", 150, 2500.5}, {"BMW X5", 249, 5500.0}, {"Lada Vesta", 106, 850.3},
        {"Mercedes E-class", 184, 4800.7}, {"Kia Rio", 100, 1200.9}, {"Hyundai Solaris", 123, 1100.2},
        {"Volkswagen Polo", 110, 1300.8}, {"Skoda Octavia", 150, 1900.4}, {"Audi A6", 245, 5200.6},
        {"Ford Focus", 125, 1400.1}, {"Nissan Qashqai", 144, 2100.7}, {"Renault Duster", 114, 1500.3},
        {"Mazda CX-5", 165, 2300.9}, {"Lexus RX", 249, 5800.2}, {"Toyota RAV4", 150, 2700.5},
        {"BMW 3-series", 184, 3900.8}, {"Mercedes S-class", 367, 10500.0}, {"Kia Sportage", 150, 2200.4},
        {"Hyundai Tucson", 150, 2100.6}, {"Volkswagen Tiguan", 150, 2400.2}, {"Skoda Kodiaq", 150, 2600.8},
        {"Audi Q7", 249, 6800.3}, {"Ford Explorer", 250, 4500.7}, {"Nissan X-Trail", 144, 2300.1},
        {"Renault Kaptur", 114, 1400.9}, {"Mazda 6", 150, 2100.5}, {"Lexus NX", 150, 4200.2},
        {"Toyota Land Cruiser", 249, 7200.7}, {"BMW 7-series", 326, 8900.4}, {"Mercedes GLE", 249, 6100.8}
    };

    double total = totalPriceHighPowerCars(cars, 30, 100);

    cout << "Общая стоимость автомобилей мощностью более 100 л.с.: " << total << " тыс. руб." << endl;
    cout << "Количество автомобилей: 30" << endl;

    // Также можно посчитать только для тех, у кого мощность > 100 л.с.
    int count = 0;
    for (int i = 0; i < 30; i++) {
        if (cars[i].power > 100) count++;
    }

    cout << "Из них мощностью > 100 л.с.: " << count << " автомобилей" << endl;

    return 0;
}