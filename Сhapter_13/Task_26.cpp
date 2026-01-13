#include <iostream>
#include <string>
using namespace std;

struct Car {
    string model;
    double price; // цена в тыс. руб.
    string type; // "легковой", "грузовой"
};

double averagePassengerCarPrice(Car cars[], int n) {
    double totalPrice = 0.0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (cars[i].type == "легковой") {
            totalPrice += cars[i].price;
            count++;
        }
    }

    if (count == 0) return 0.0;
    return totalPrice / count;
}

int main() {
    setlocale(LC_ALL, "RU");

    Car cars[15] = {
        {"Toyota Camry", 2500.5, "легковой"},
        {"КАМАЗ 65115", 3200.0, "грузовой"},
        {"Lada Vesta", 850.3, "легковой"},
        {"Mercedes Actros", 5500.7, "грузовой"},
        {"Kia Rio", 1200.9, "легковой"},
        {"ГАЗель NEXT", 1800.2, "грузовой"},
        {"Volkswagen Polo", 1300.8, "легковой"},
        {"MAN TGS", 4800.4, "грузовой"},
        {"Audi A6", 5200.6, "легковой"},
        {"Урал-4320", 3500.1, "грузовой"},
        {"Ford Focus", 1400.7, "легковой"},
        {"Scania R-series", 6200.3, "грузовой"},
        {"Mazda CX-5", 2300.9, "легковой"},
        {"Volvo FH", 5800.2, "грузовой"},
        {"Hyundai Solaris", 1100.5, "легковой"}
    };

    double avgPrice = averagePassengerCarPrice(cars, 15);

    cout << "Средняя стоимость легковых автомобилей: "
        << avgPrice << " тыс. руб." << endl;

    // Дополнительная информация
    int passengerCount = 0;
    int truckCount = 0;
    double passengerTotal = 0.0;
    double truckTotal = 0.0;

    for (int i = 0; i < 15; i++) {
        if (cars[i].type == "легковой") {
            passengerCount++;
            passengerTotal += cars[i].price;
        }
        else {
            truckCount++;
            truckTotal += cars[i].price;
        }
    }

    cout << "Количество легковых автомобилей: " << passengerCount << endl;
    cout << "Количество грузовых автомобилей: " << truckCount << endl;
    cout << "Средняя стоимость грузовых автомобилей: "
        << (truckCount > 0 ? truckTotal / truckCount : 0) << " тыс. руб." << endl;

    return 0;
}