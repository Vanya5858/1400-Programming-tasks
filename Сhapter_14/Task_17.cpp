#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    setlocale(LC_ALL, "RU");

    double a, b, c, d, e;

    cout << "Введите стороны пятиугольника (a, b, c, d, e):" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "d = ";
    cin >> d;
    cout << "e = ";
    cin >> e;

    double area1 = triangleArea(a, b, e);  // Треугольник 1
    double area2 = triangleArea(b, c, d);  // Треугольник 2  
    double area3 = triangleArea(d, e, c);  // Треугольник 3

    double totalArea = area1 + area2 + area3;

    cout << fixed << setprecision(2);
    cout << "\nРезультат:" << endl;
    cout << "Площадь пятиугольника = " << totalArea << endl;

    return 0;
}