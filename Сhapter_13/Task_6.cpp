#include <iostream>
#include <string>
using namespace std;

struct Car {
    string model;
    int maxSpeed;
};

void printFastCars(Car cars[], int n) {
    for (int i = 0; i < n; i++) {
        if (cars[i].maxSpeed > 180) {
            cout << cars[i].model << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Car cars[20] = {
        {"Ferrari F8 Tributo", 340},
        {"Lamborghini Aventador", 350},
        {"Bugatti Chiron", 420},
        {"McLaren 720S", 341},
        {"Porsche 911 Turbo S", 330},
        {"Audi R8", 330},
        {"Nissan GT-R", 315},
        {"Chevrolet Corvette", 312},
        {"Ford Mustang Shelby GT500", 290},
        {"BMW M5", 305},
        {"Mercedes-AMG GT", 317},
        {"Toyota Supra", 250},
        {"Honda Civic Type R", 272},
        {"Volkswagen Golf R", 270},
        {"Subaru WRX STI", 274},
        {"Mazda RX-7", 250},
        {"Lexus LFA", 325},
        {"Aston Martin DB11", 335},
        {"Jaguar F-Type", 300},
        {"Tesla Roadster", 400}
    };

    printFastCars(cars, 20);

    return 0;
}