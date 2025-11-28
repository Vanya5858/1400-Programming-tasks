#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x;
    cout << "Введите x: ";
    cin >> x;

    double f;
    if (x >= 0.2 && x <= 0.9) {
        f = sin(x);
    }
    else {
        f = 1;
    }

    cout << "f(x) = " << f << endl;

    return 0;
}