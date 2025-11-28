#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double S_circle, S_triangle, M_PI = 3.14159;
    cout << "Введите площадь круга: ";
    cin >> S_circle;
    cout << "Введите площадь равностороннего треугольника: ";
    cin >> S_triangle;

    // а) круг в треугольнике
    double circle_radius = sqrt(S_circle / M_PI);
    double triangle_side = sqrt(4 * S_triangle / sqrt(3));
    double inscribed_circle_radius = triangle_side * sqrt(3) / 6;

    if (circle_radius <= inscribed_circle_radius) {
        cout << "а) Круг помещается в треугольнике\n";
    }
    else {
        cout << "а) Круг не помещается в треугольнике\n";
    }

    // б) треугольник в круге
    double circumscribed_circle_radius = triangle_side * sqrt(3) / 3;

    if (circumscribed_circle_radius <= circle_radius) {
        cout << "б) Треугольник помещается в круге\n";
    }
    else {
        cout << "б) Треугольник не помещается в круге\n";
    }

    return 0;