#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c, d;
    cout << "Введите четыре вещественных числа: ";
    cin >> a >> b >> c >> d;

    int count = 0;
    if (a < 0) count++;
    if (b < 0) count++;
    if (c < 0) count++;
    if (d < 0) count++;

    cout << "Количество отрицательных чисел: " << count << endl;

    return 0;
}