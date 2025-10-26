#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double celsius;

    cout << "\t\t\tПеревод из градусов цельсия в Фаренгейты и Кельвины\n";

    // Ввод температуры в градусах Цельсия
    cout << "Введите температуру в градусах Цельсия: ";
    cin >> celsius;

    // Перевод в Фаренгейты
    double fahrenheit = (celsius * 1.8) + 32;

    // Перевод в Кельвины
    double kelvin = celsius + 273.15;

    // Вывод результатов
    cout << "\nТемпература в различных шкалах:\n";
    cout << "Цельсий: " << celsius << " C\n";
    cout << "Фаренгейт: " << fahrenheit << " F\n";
    cout << "Кельвин: " << kelvin << " K\n";

    return 0;
}