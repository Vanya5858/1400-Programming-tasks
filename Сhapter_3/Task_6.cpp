#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int seat_number;

    // Ввод номера места
    cout << "Введите номер места: ";
    cin >> seat_number;

    // Проверка корректности данных
    if (seat_number < 1) {
        cout << "Ошибка: Нет отрицательных мест!\n\n";
        return 1;
    }

    int compartment_number = ((seat_number -1) / 4) + 1;

    // Вывод результата
    cout << "Место #" << seat_number << " находится в купе #" << compartment_number << endl;

    return 0;
}