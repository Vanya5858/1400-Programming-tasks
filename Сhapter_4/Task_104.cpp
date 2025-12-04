#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;

    // а) полусумма абсолютных величин
    double abs_a = a, abs_b = b;
    if (a < 0) abs_a = -a;
    if (b < 0) abs_b = -b;

    cout << "а) Полусумма: " << (abs_a + abs_b) / 2 << endl;

    // б) квадратный корень из произведения абсолютных величин
    cout << "б) Корень из произведения: " << sqrt(abs_a * abs_b) << endl;

    return 0;
}