#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double M_PI = 3.14159;
    const double thickness = 0.5; // толщина стенки в см
    double inner_diameter = 10.0; // внутренний диаметр в см
    double total_volume = 0.0;

    for (int i = 1; i <= 12; i++) {
        double outer_diameter = inner_diameter + 2 * thickness;
        double volume = (4.0 / 3.0) * M_PI * pow(outer_diameter / 2, 3) / 1000; // в литрах
        total_volume += volume;
        inner_diameter = outer_diameter; // следующий шар вкладывается внутрь
    }

    cout << "Суммарный объем 12 шаров: " << total_volume << " литров\n";

    return 0;
}