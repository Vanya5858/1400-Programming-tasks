#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y;
    cout << "Введите x: ";
    cin >> x;

    if (x < -1) {
        y = -1;
    }
    else if (x > -1) {
        y = x;
    }
    else {
        y = 1;
    }

    cout << "y = " << y << endl;

    return 0;
}