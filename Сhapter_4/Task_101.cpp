#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите три различных числа: ";
    cin >> a >> b >> c;

    // а) наибольшее
    double max_val = a;
    if (b > max_val) max_val = b;
    if (c > max_val) max_val = c;
    cout << "а) Наибольшее: " << max_val << endl;

    // б) наименьшее
    double min_val = a;
    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;
    cout << "б) Наименьшее: " << min_val << endl;

    return 0;
}