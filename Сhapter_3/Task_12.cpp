#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int apartment_number;

    // Ввод номера квартиры
    cout << "Введите номер квартиры: ";
    cin >> apartment_number;

    // Вычисление номера этажа (на каждом этаже 4 квартиры)
    int floor_number = (apartment_number - 1) / 4 + 1;

    // Вычисление порядкового номера квартиры на этаже
    int apartment_on_floor = (apartment_number - 1) % 4 + 1;

    // Вывод результатов
    cout << "Квартира #" << apartment_number << " находится:\n";
    cout << "1) На " << floor_number << " этаже\n";
    cout << "2) Является " << apartment_on_floor << "-й по счету на этаже\n";

    return 0;
}