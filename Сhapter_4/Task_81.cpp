#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        // Находим квадраты сторон
        double a2 = a * a, b2 = b * b, c2 = c * c;

        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
            cout << "а) Треугольник прямоугольный\n";
        }
        else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
            cout << "а) Треугольник остроугольный\n";
        }
        else {
            cout << "а) Треугольник тупоугольный\n";
        }

        // б) Определяем тип по сторонам
        if (a == b && b == c) {
            cout << "б) Равносторонний" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "б) Равнобедренный" << endl;
        }
        else {
            cout << "б) Разносторонний" << endl;
        }
    }
    else {
        cout << "Треугольник не существует" << endl;
    }

    return 0;
}