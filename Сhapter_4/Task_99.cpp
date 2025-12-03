#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите два различных вещественных числа: ";
    cin >> a >> b;

    // а) два неполных условных оператора
    double max1;
    if (a > b) max1 = a;
    if (b > a) max1 = b;
    cout << "а) Максимум: " << max1 << endl;

    // б) один неполный условный оператор
    double max2 = a;
    if (b > a) max2 = b;
    cout << "б) Максимум: " << max2 << endl;

    return 0;
}