#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        // Проверяем теорему Пифагора
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Треугольник прямоугольный\n";
        }
        else {
            cout << "Треугольник не прямоугольный\n";
        }
    }
    else {
        cout << "Треугольник не существует\n";
    }

    return 0;
}