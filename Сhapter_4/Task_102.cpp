#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c, d;
    cout << "Введите четыре различных числа: ";
    cin >> a >> b >> c >> d;

    // а) наибольшее
    double max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    if (d > max_val) max_val = d;
    cout << "а) Наибольшее: " << max_val << endl;

    // б) наименьшее
    double min_val = a;
    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;
    if (d < min_val) min_val = d;
    cout << "б) Наименьшее: " << min_val << endl;

    return 0;
}