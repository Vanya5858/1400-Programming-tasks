// Вариант 1 (нумерация как на рис. 3.1 - построчно) :
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int place_number;

    // Ввод номера места
    cout << "Введите номер места: ";
    cin >> place_number;

    // Константы стеллажа
    const int sections = 8;       
    const int tiers = 10;         
    const int places_per_tier = 15; 

    // Вычисление секции (столбца)
    int section = (place_number - 1) % sections + 1;

    // Вычисление яруса (строки)
    int tier = (place_number - 1) / sections + 1;

    // Вывод результатов
    cout << "Место #" << place_number << " находится:\n";
    cout << "В секции: " << section << endl;
    cout << "На ярусе: " << tier << endl;

    return 0;
}