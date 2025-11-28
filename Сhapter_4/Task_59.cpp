#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    // а) равносторонний
    if (a == b && b == c) {
        cout << "а) Треугольник равносторонний\n";
    }
    else {
        cout << "а) Треугольник не равносторонний\n";
    }

    // б) равнобедренный
    if (a == b || a == c || b == c) {
        cout << "б) Треугольник равнобедренный\n";
    }
    else {
        cout << "б) Треугольник не равнобедренный\n";
    }

    return 0;
}