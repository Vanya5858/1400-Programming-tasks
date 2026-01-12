#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    setlocale(LC_ALL, "RU");

    double x1, y1, x2, y2, x3, y3;

    cout << "Введите координаты вершин треугольника:" << endl;
    cout << "Вершина A (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Вершина B (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Вершина C (x3 y3): ";
    cin >> x3 >> y3;

    double AB = distance(x1, y1, x2, y2);
    double BC = distance(x2, y2, x3, y3);
    double CA = distance(x3, y3, x1, y1);

    double perimeter = AB + BC + CA;

    cout << fixed << setprecision(2);
    cout << "\nРезультат:" << endl;
    cout << "AB = " << AB << endl;
    cout << "BC = " << BC << endl;
    cout << "CA = " << CA << endl;
    cout << "Периметр треугольника = " << perimeter << endl;

    return 0;
}