#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const double M_PI = 3.14159;
    const int n = 1000; // количество разбиений
    const double step = M_PI / n; // шаг интегрирования
    double area = 0.0;

    for (int i = 0; i < n; i++) {
        double x = i * step;
        double y = sin(x);
        area += y * step;
    }

    cout << "Приближенная площадь одной арки синусоиды: " << area << endl;

    return 0;
}