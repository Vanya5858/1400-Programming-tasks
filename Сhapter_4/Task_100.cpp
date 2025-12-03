#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите два различных вещественных числа: ";
    cin >> a >> b;

    double max_val, min_val;

    // а) два неполных условных оператора
    max_val = a;
    min_val = a;
    if (b > a) max_val = b;
    if (b < a) min_val = b;
    cout << "а) Максимум: " << max_val << ", минимум: " << min_val << endl;

    // б) один неполный условный оператор
    max_val = a;
    min_val = b;
    if (b > a) {
        max_val = b;
        min_val = a;
    }
    cout << "б) Максимум: " << max_val << ", минимум: " << min_val << endl;

    return 0;
}