#include <iostream>
#include <string>
using namespace std;

struct CarModel {
    string model;
    double price; // цена в тыс. руб.
    int age; // возраст в годах
};

double averagePriceOldCars(CarModel cars[], int n, int minAge) {
    double totalPrice = 0.0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (cars[i].age > minAge) {
            totalPrice += cars[i].price;
            count++;
        }
    }

    if (count == 0) return 0.0;
    return totalPrice / count;
}

int main() {
    setlocale(LC_ALL, "RU");

    CarModel cars[20] = {
        {"Toyota Camry 2015", 1200.5, 8},
        {"BMW X5 2020", 4500.0, 3},
        {"Lada Vesta 2018", 650.3, 5},
        {"Mercedes E-class 2016", 3200.7, 7},
        {"Kia Rio 2022", 1300.9, 1},
        {"Hyundai Solaris 2017", 900.2, 6},
        {"Volkswagen Polo 2019", 1100.8, 4},
        {"Skoda Octavia 2014", 850.4, 9},
        {"Audi A6 2021", 4200.6, 2},
        {"Ford Focus 2013", 600.1, 10},
        {"Nissan Qashqai 2018", 1600.7, 5},
        {"Renault Duster 2016", 950.3, 7},
        {"Mazda CX-5 2020", 2100.9, 3},
        {"Lexus RX 2017", 3800.2, 6},
        {"Toyota RAV4 2019", 2200.5, 4},
        {"BMW 3-series 2015", 1900.8, 8},
        {"Mercedes S-class 2014", 2800.0, 9},
        {"Kia Sportage 2021", 1800.4, 2},
        {"Hyundai Tucson 2018", 1600.6, 5},
        {"Volkswagen Tiguan 2016", 1400.2, 7}
    };

    double avgPrice = averagePriceOldCars(cars, 20, 6);

    cout << "Средняя стоимость автомобилей старше 6 лет: "
        << avgPrice << " тыс. руб." << endl;

    // Дополнительная информация
    int oldCarsCount = 0;
    double totalOldPrice = 0.0;
    for (int i = 0; i < 20; i++) {
        if (cars[i].age > 6) {
            oldCarsCount++;
            totalOldPrice += cars[i].price;
        }
    }

    cout << "Количество автомобилей старше 6 лет: " << oldCarsCount << endl;
    cout << "Общая стоимость автомобилей старше 6 лет: "
        << totalOldPrice << " тыс. руб." << endl;

    return 0;
}