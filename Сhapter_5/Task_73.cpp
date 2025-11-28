#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double M_PI = 3.14159;
    const double length = 4.5; // длина палки
    const double wall_distance = 3.0; // расстояние от стены
    const double step = 0.2; // шаг скольжения

    cout << "Угол между палкой и полом при скольжении:\n";

    for (double slide = 0.0; slide <= wall_distance; slide += step) {
        double current_distance = wall_distance - slide;

        // Используем теорему Пифагора
        if (current_distance <= length) {
            double angle_rad = asin(current_distance / length);
            double angle_deg = angle_rad * 180.0 / M_PI;

            cout << "Скольжение: " << slide << " м, угол: " << angle_deg << "°\n";
        }
    }

    return 0;
}