#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double y, f;
    cout << "Введите y: ";
    cin >> y;

    if (y > 2) {
        f = 2;
    }
    else if (y > 0) {
        f = 0;
    }
    else {
        f = -3 * y;
    }

    cout << "f(y) = " << f << endl;

    return 0;
}