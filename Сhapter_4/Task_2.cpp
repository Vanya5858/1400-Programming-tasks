#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите x: ";
    cin >> x;

    if (x > 0) {
        y = sin(x) * sin(x);
    }
    else {
        y = 1 - 2 * sin(x * x);
    }

    cout << "y = " << y << endl;
    return 0;
}