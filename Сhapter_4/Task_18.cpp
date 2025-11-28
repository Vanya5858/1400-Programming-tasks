#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double S_circle, S_square, M_PI = 3.14159;
    cout << "Введите площадь круга: ";
    cin >> S_circle;
    cout << "Введите площадь квадрата: ";
    cin >> S_square;

    // а) круг в квадрате
    double circle_radius = sqrt(S_circle / M_PI);
    double square_side = sqrt(S_square);

    if (2 * circle_radius <= square_side) {
        cout << "а) Круг помещается в квадрате\n";
    }
    else {
        cout << "а) Круг не помещается в квадрате\n";
    }

    // б) квадрат в круге
    double circle_diameter = 2 * circle_radius;
    double square_diagonal = square_side * sqrt(2);

    if (square_diagonal <= circle_diameter) {
        cout << "б) Квадрат помещается в круге\n";
    }
    else {
        cout << "б) Квадрат не помещается в круге\n";
    }

    return 0;
}