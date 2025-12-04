#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, d, e, f;
    cout << "Введите шесть целых чисел: ";
    cin >> a >> b >> c >> d >> e >> f;

    int sum = 0;
    if (a > 0) sum += a;
    if (b > 0) sum += b;
    if (c > 0) sum += c;
    if (d > 0) sum += d;
    if (e > 0) sum += e;
    if (f > 0) sum += f;

    cout << "Сумма положительных чисел: " << sum << endl;

    return 0;
}