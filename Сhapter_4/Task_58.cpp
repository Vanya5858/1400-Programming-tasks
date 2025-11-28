#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите три вещественных числа: ";
    cin >> a >> b >> c;

    if (a == b || a == c || b == c) {
        cout << "Есть хотя бы одна пара равных чисел\n";
    }
    else {
        cout << "Все числа различны\n";
    }

    return 0;
}