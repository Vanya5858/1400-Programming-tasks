#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите x: ";
    cin >> x;

    // а) для графика а
    if (x <= 2) {
        y = x;
    }
    else {
        y = 2;
    }
    cout << "а) y = " << y << endl;

    // б) для графика б
    if (x <= 3) {
        y = -x;
    }
    else {
        y = -3;
    }
    cout << "б) y = " << y << endl;

    return 0;
}