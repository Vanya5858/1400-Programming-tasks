#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, d;
    cout << "Введите четыре целых числа: ";
    cin >> a >> b >> c >> d;

    int count = 0;
    if (a % 2 == 0) count++;
    if (b % 2 == 0) count++;
    if (c % 2 == 0) count++;
    if (d % 2 == 0) count++;

    cout << "Количество четных чисел: " << count << endl;

    return 0;
}