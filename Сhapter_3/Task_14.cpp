#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int apartment_number;

    // Ввод номера квартиры
    cout << "Введите номер квартиры: ";
    cin >> apartment_number;

   
    const int apartments_per_floor = 6;    
    const int floors_per_entrance = 9;   
    const int apartments_per_entrance = apartments_per_floor * floors_per_entrance; 

    // Вычисление номера подъезда
    int entrance = (apartment_number - 1) / apartments_per_entrance + 1;

    // Вычисление номера квартиры в подъезде (от 1 до 54)
    int apartment_in_entrance = (apartment_number - 1) % apartments_per_entrance + 1;

    // Вычисление номера этажа в подъезде
    int floor = (apartment_in_entrance - 1) / apartments_per_floor + 1;

    // Вычисление порядкового номера квартиры на этаже
    int position_on_floor = (apartment_in_entrance - 1) % apartments_per_floor + 1;

    // Вывод результатов
    cout << "Квартира #" << apartment_number << " находится:\n";
    cout << "1) В подъезде: " << entrance << endl;
    cout << "2) На этаже: " << floor << endl;
    cout << "3) Является " << position_on_floor << "-й по счету на этаже\n\n";

    return 0;
}