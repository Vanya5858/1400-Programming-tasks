#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите три вещественных числа: ";
    cin >> a >> b >> c;

    cout << "Числа в интервале [1.6, 3.8]: ";
    if (a >= 1.6 && a <= 3.8) cout << a << " ";
    if (b >= 1.6 && b <= 3.8) cout << b << " ";
    if (c >= 1.6 && c <= 3.8) cout << c << " ";
    cout << endl;

    return 0;
}