// Вариант 2 (нумерация как на рис. 3.2 - по столбцам):
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
    const int total_places = sections * tiers; 

    // Вычисление секции (столбца)
    int section = (place_number - 1) / tiers + 1;

    // Вычисление яруса (строки)
    int tier = (place_number - 1) % tiers + 1;

    // Вывод результатов
    cout << "Место №" << place_number << " находится:\n";
    cout << "В секции: " << section << endl;
    cout << "На ярусе: " << tier << endl;

    return 0;
}