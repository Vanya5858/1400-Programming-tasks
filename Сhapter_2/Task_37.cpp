#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double fahrenheit = 450.0;  // Температура из названия романа

    cout << "\t\t\t«450 градусов по Фаренгейту» перевод в градусы Цельсия\n";

    // Перевод Фаренгейт в Цельсий
    double celsius = (fahrenheit - 32) / 1.8;

    // Перевод Цельсий в Кельвин
    double kelvin = celsius + 273.15;

    // Вывод результатов
    cout << "\nРоман Рэя Бредбери: '450 градусов по Фаренгейту'\n";
    cout << "Перевод температуры:\n";
    cout << "Фаренгейт: " << fahrenheit << " F\n";
    cout << "Цельсий: " << celsius << " C\n";
    cout << "Кельвин: " << kelvin << " K\n";

    return 0;
}