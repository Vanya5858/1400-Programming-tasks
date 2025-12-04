#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c;
    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;

    int sum = 0;
    if (a > 0) sum += a;
    if (b > 0) sum += b;
    if (c > 0) sum += c;

    cout << "Сумма положительных чисел: " << sum << endl;

    return 0;
}