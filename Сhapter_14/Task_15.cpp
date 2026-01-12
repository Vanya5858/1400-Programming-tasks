#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double trapezoidPerimeter(double base1, double base2, double height) {
    double side = sqrt(height * height + ((base2 - base1) / 2) * ((base2 - base1) / 2));
    return base1 + base2 + 2 * side;
}

int main() {
    setlocale(LC_ALL, "RU");

    double base1_1, base2_1, height1, base1_2, base2_2, height2;

    cout << "Введите данные первой трапеции:" << endl;
    cout << "Основание 1: ";
    cin >> base1_1;
    cout << "Основание 2: ";
    cin >> base2_1;
    cout << "Высота: ";
    cin >> height1;

    cout << "\nВведите данные второй трапеции:" << endl;
    cout << "Основание 1: ";
    cin >> base1_2;
    cout << "Основание 2: ";
    cin >> base2_2;
    cout << "Высота: ";
    cin >> height2;

    double perimeter1 = trapezoidPerimeter(base1_1, base2_1, height1);
    double perimeter2 = trapezoidPerimeter(base1_2, base2_2, height2);

    cout << fixed << setprecision(2);
    cout << "\nРезультаты:" << endl;
    cout << "Периметр первой трапеции: " << perimeter1 << endl;
    cout << "Периметр второй трапеции: " << perimeter2 << endl;
    cout << "Сумма периметров: " << perimeter1 + perimeter2 << endl;

    return 0;
}