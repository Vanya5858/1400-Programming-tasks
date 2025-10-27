#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int apartment_number;

    // Ввод номера квартиры
    cout << "Введите номер квартиры: ";
    cin >> apartment_number;

    // Проверка корректности данных
    if (apartment_number < 1 || apartment_number > 15) {
        cout << "Ошибка: в подъезде только 15 квартир (номера с 1 по 15)!\n\n";
        return 1;
    }

    int floor_number = (apartment_number - 1) / 3 + 1;

    // Вывод результата
    cout << "Квартира #" << apartment_number << " находится на " << floor_number << " этаже\n\n";

    return 0;
}