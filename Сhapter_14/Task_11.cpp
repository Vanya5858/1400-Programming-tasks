#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f_a(double num) {
    return (num + sqrt(num)) / (sqrt(num + 5) + (num + 5));
}

double f_b(double num1, double num2) {
    return (num1 + sqrt(num2)) / (sqrt(num1) + num2);
}

int main() {
    setlocale(LC_ALL, "RU");
    double x_a = f_a(5) + f_a(12) + f_a(31);
    cout << fixed << setprecision(4);
    cout << "a) x = " << x_a << endl;

    double x_b = f_b(13, 7) + f_b(15, 12) + f_b(32, 21);
    cout << "б) x = " << x_b << endl;

    return 0;
}