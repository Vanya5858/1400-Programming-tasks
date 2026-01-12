#include <iostream>
#include <cmath>
using namespace std;

double trianglePerimeter(double a, double b, double c) {
    return a + b + c;
}

double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    setlocale(LC_ALL, "RU");

    double a1, b1, c1, a2, b2, c2;

    cout << "Введите стороны первого треугольника:" << endl;
    cout << "a1 = ";
    cin >> a1;
    cout << "b1 = ";
    cin >> b1;
    cout << "c1 = ";
    cin >> c1;

    cout << "\nВведите стороны второго треугольника:" << endl;
    cout << "a2 = ";
    cin >> a2;
    cout << "b2 = ";
    cin >> b2;
    cout << "c2 = ";
    cin >> c2;

    double perimeter1 = trianglePerimeter(a1, b1, c1);
    double area1 = triangleArea(a1, b1, c1);

    double perimeter2 = trianglePerimeter(a2, b2, c2);
    double area2 = triangleArea(a2, b2, c2);

    cout << "\nРезультаты:" << endl;
    cout << "Периметр первого треугольника: " << perimeter1 << endl;
    cout << "Площадь первого треугольника: " << area1 << endl;
    cout << "Периметр второго треугольника: " << perimeter2 << endl;
    cout << "Площадь второго треугольника: " << area2 << endl;
    cout << "Сумма периметров: " << perimeter1 + perimeter2 << endl;
    cout << "Сумма площадей: " << area1 + area2 << endl;

    return 0;
}