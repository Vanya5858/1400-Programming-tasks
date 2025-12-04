#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c, d;
    cout << "Введите четыре вещественных числа: ";
    cin >> a >> b >> c >> d;

    double sum = 0;
    if (a > 5) sum += a;
    if (b > 5) sum += b;
    if (c > 5) sum += c;
    if (d > 5) sum += d;

    cout << "Сумма чисел больше пяти: " << sum << endl;

    return 0;
}