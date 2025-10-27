#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int ticket_number;

    // Ввод серийного номера билета
    cout << "Введите серийный номер билета(от 1643): ";
    cin >> ticket_number;

    
    // Вычисление порядкового номера места (от 1 до 300)
    int seat_number = ticket_number - 1642;

    // Вычисление номера ряда (в каждом ряду 15 мест)
    int row_number = (seat_number - 1) / 15 + 1;

    // Вычисление номера кресла в ряду
    int seat_in_row = (seat_number - 1) % 15 + 1;

    // Вывод результатов
    cout << "Билет #" << ticket_number << endl;
    cout << "Порядковый номер места: " << seat_number << endl;
    cout << "Ряд: " << row_number << endl;
    cout << "Кресло в ряду: " << seat_in_row << "\n\n";

    return 0;
}