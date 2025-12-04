#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите x: ";
    cin >> x;

    // а) для графика а
    if (x <= -1) {
        y = 0;
    }
    else if (x < 0) {
        y = 1 + x;
    }
    else {
        y = 1;
    }
    cout << "а) y = " << y << endl;

    // б) для графика б
    if (x <= -1) {
        y = 1;
    }
    else if (x == 0) {
        y = 0;
    }
    else if (x < 1) {
        y = -x;
    }
    else {
        y = -1;
    }
    cout << "б) y = " << y << endl;

    // в) для графика в
    if (x <= -1) {
        y = 1;
    }
    else if (x <= 0) {
        y = 0.5 - x/2;
    }
    else if (x < 1) {
        y = 0.5 + x/2;
    }
    else {
        y = 1;
    }
    cout << "в) y = " << y << endl;

    return 0;
}