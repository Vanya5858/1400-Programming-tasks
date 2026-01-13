#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f1(double x) {
    return pow(x, 4) + 2 * pow(x, 3) - x - 1;
}

double f2(double x) {
    return pow(x, 3) - 0.2 * pow(x, 2) - 0.2 * x - 1.2;
}

double bisection(double (*f)(double), double a, double b, double epsilon) {
    double fa = f(a);
    double fb = f(b);

    if (fa * fb > 0) {
        cout << "На отрезке нет корня или несколько корней" << endl;
        return 0;
    }

    while (b - a > epsilon) {
        double c = (a + b) / 2;
        double fc = f(c);

        if (fa * fc <= 0) {
            b = c;
            fb = fc;
        }
        else {
            a = c;
            fa = fc;
        }
    }

    return (a + b) / 2;
}

int main() {
    setlocale(LC_ALL, "RU");
    cout << fixed << setprecision(4);

    cout << "а) Уравнение: x^4 + 2x^3 - x - 1 = 0" << endl;
    cout << "   Отрезок: [0, 1]" << endl;
    double root1 = bisection(f1, 0, 1, 0.001);
    cout << "   Приближенный корень: " << root1 << endl;
    cout << "   Значение функции в корне: " << f1(root1) << endl;

    cout << "\nб) Уравнение: x^3 - 0.2x^2 - 0.2x - 1.2 = 0" << endl;
    cout << "   Отрезок: [1, 1.5]" << endl;
    double root2 = bisection(f2, 1, 1.5, 0.001);
    cout << "   Приближенный корень: " << root2 << endl;
    cout << "   Значение функции в корне: " << f2(root2) << endl;

    return 0;
}