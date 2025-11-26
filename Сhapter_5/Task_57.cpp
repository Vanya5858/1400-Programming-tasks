#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 1000; // количество разбиений
    const double x1 = 2.0, x2 = 4.0; // пределы интегрирования
    const double step = (x2 - x1) / n;
    double area = 0.0;

    for (int i = 0; i < n; i++) {
        double x = x1 + i * step;
        double y = 0.3 * pow(x - 1, 2) + 3;
        area += y * step;
    }

    cout << "Приближенная площадь фигуры: " << area << endl;

    return 0;
}