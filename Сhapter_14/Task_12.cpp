#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double g_a(double num) {
    return (num + sin(num)) / (sin(num + 3) + (num + 3));
}

double g_b(double num1, double num2) {
    return (num1 + sin(num2)) / (num2 + sin(num1));
}

int main() {
    setlocale(LC_ALL, "RU");

    double y_a = g_a(2) + g_a(6) + g_a(1);
    cout << fixed << setprecision(4);
    cout << "a) y = " << y_a << endl;

    double y_b = g_b(1, 4) + g_b(7, 5) + g_b(3, 2);
    cout << "б) y = " << y_b << endl;

    return 0;
}