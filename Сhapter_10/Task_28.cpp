#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    const double M_PI = 3.141592653589793;
    const double eps = 0.0001;
    long long in_circle = 0, total = 0;
    double pi_old = 0, pi_new = 0;

    do {
        double x = 2.0 * rand() / RAND_MAX - 1.0;
        double y = 2.0 * rand() / RAND_MAX - 1.0;

        total++;
        if (x * x + y * y <= 1.0) in_circle++;

        pi_old = pi_new;
        pi_new = 4.0 * in_circle / total;

    } while (abs(pi_new - pi_old) > eps);

    cout << fixed << setprecision(5);
    cout << "Вычисление П методом Монте-Карло" << endl;
    cout << "Точность: " << eps << endl;
    cout << "Количество точек: " << total << endl;
    cout << "Вычисленное П: " << pi_new << endl;
    cout << "Библиотечное П: " << M_PI << endl;
    cout << "Разность: " << abs(pi_new - M_PI) << endl;

    return 0;
}