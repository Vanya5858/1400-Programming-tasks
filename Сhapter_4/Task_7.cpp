#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, k, f;
    cout << "Введите x: ";
    cin >> x;

    if (sin(x) < 0) {
        k = x * x;
    }
    else {
        k = fabs(x);
    }

    if (k < x) {
        f = k * x;
    }
    else {
        f = k + x;
    }

    cout << "f(x) = " << f << endl;
    return 0;
}