#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите три вещественных числа: ";
    cin >> a >> b >> c;

    if (a >= 0) a = a * a;
    if (b >= 0) b = b * b;
    if (c >= 0) c = c * c;

    cout << "После возведения в квадрат: " << a << " " << b << " " << c << endl;

    return 0;
}