#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, x, eps;
    cout << "Введите a, x, ε: ";
    cin >> a >> x >> eps;

    double y_prev = a;
    double y_curr = 0.5 * (y_prev + x / (y_prev - 1));
    int n = 2;

    while (abs(y_curr * y_curr - y_prev * y_prev) >= eps) {
        y_prev = y_curr;
        y_curr = 0.5 * (y_prev + x / (y_prev - 1));
        n++;
    }

    cout << "Первый подходящий член: y_" << n << " = " << y_curr << endl;
    return 0;
}