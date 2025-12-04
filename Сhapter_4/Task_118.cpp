#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, f;
    cout << "Введите x: ";
    cin >> x;

    if (x <= 0) {
        f = 0;
    }
    else if (x <= 1) {
        f = x;
    }
    else {
        f = x * x;
    }

    cout << "f(x) = " << f << endl;

    return 0;
}