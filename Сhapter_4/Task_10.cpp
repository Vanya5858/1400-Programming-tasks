#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double km, feet;
    const double FOOT_TO_METER = 0.3048;

    cout << "Введите расстояние в километрах: ";
    cin >> km;
    cout << "Введите расстояние в футах: ";
    cin >> feet;

    if (km < 0 || feet < 0) {
        cout << "Ошибка! Расстояния не могут быть отрицательными.\n";
        return 1;
    }

    // Переводим километры в футы для сравнения
    double km_to_feet = km * 1000.0 / FOOT_TO_METER;

    cout << km << " км = " << km_to_feet << " футов\n";

    if (km_to_feet < feet) {
        cout << "Меньше: расстояние в километрах\n";
    }
    else if (feet < km_to_feet) {
        cout << "Меньше: расстояние в футах\n";
    }
    else {
        cout << "Расстояния равны\n";
    }

    return 0;
}