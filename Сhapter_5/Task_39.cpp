#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x = 2.0;
    double sum = 0;

    // Ряд начинается с 1 (это член при i=0)
    for (int i = 0; i <= 10; i++) {
        double sign = (i % 2 == 0) ? 1.0 : -1.0;
        double coef = (i + 1.0) / (i + 2.0);
        double x_power = pow(x, i);
        double term = sign * coef * x_power;

        // Для первого члена (i=0) должно быть 1, а не 1/2
        if (i == 0) {
            term = 1.0;
        }

        sum += term;
        cout << "Член " << i << ": " << term << endl;
    }

    cout << "Сумма ряда = " << sum << endl;
    return 0;
}