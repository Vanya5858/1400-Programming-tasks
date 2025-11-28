#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите три вещественных числа(a, b, c): ";
    cin >> a >> b >> c;

    // а) выполняется ли a < b < c
    if (a < b && b < c) {
        cout << "а) Неравенство a < b < c выполняется\n";
    }
    else {
        cout << "а) Неравенство a < b < c не выполняется\n";
    }

    // б) выполняется ли b > a > c
    if (b > a && a > c) {
        cout << "б) Неравенство b > a > c выполняется\n";
    }
    else {
        cout << "б) Неравенство b > a > c не выполняется\n";
    }

    return 0;
}