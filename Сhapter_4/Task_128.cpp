#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите три различных вещественных числа: ";
    cin >> a >> b >> c;

    double max_val, min_val;

    if (a > b && a > c) {
        max_val = a;
        if (b > c) {
            min_val = c;
        }
        else {
            min_val = b;
        }
    }
    else if (b > a && b > c) {
        max_val = b;
        if (a > c) {
            min_val = c;
        }
        else {
            min_val = a;
        }
    }
    else {
        max_val = c;
        if (a > b) {
            min_val = b;
        }
        else {
            min_val = a;
        }
    }

    cout << "Максимум: " << max_val << endl;
    cout << "Минимум: " << min_val << endl;

    return 0;
}