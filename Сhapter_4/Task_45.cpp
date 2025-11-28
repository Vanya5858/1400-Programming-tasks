#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x;
    cout << "Введите x: ";
    cin >> x;

    double f;
    if (x >= -2.4 && x <= 5.7) {
        f = x * x;
    }
    else {
        f = 4;
    }

    cout << "f(x) = " << f << endl;

    return 0;
}