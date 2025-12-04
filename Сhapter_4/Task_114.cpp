#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, d;
    cout << "Введите четыре целых числа: ";
    cin >> a >> b >> c >> d;

    int sum = 0;
    if (a % 3 == 0) sum += a;
    if (b % 3 == 0) sum += b;
    if (c % 3 == 0) sum += c;
    if (d % 3 == 0) sum += d;

    cout << "Сумма чисел, кратных трем: " << sum << endl;

    return 0;
}