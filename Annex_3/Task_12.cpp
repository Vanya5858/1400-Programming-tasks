#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int x, y;

    // a)
    x = 1; y = -1;
    cout << "a) x^2 - y^2 <= 0: " << (pow(x, 2) - pow(y, 2) <= 0) << endl;

    // б)
    x = 2; y = -2;
    cout << "б) (x > 2) или (y^2 != 4): " << ((x > 2) || (pow(y, 2) != 4)) << endl;

    // в)
    x = 2; y = 2;
    cout << "в) (x > 0) и (y^2 > 4): " << ((x > 0) && (pow(y, 2) > 4)) << endl;

    // г)
    x = 1; y = 2;
    cout << "г) (x*y != 4) и (y > x): " << ((x * y != 4) && (y > x)) << endl;

    // д)
    x = 2; y = 1;
    cout << "д) (x*y != 0) или (y < x): " << ((x * y != 0) || (y < x)) << endl;

    // е)
    x = 1; y = 2;
    cout << "е) не(x*y < 1) и (y > x): " << (!(x * y < 1) && (y > x)) << endl;

    // ж)
    x = 2; y = 1;
    cout << "ж) не(x*y < 0) или (y > x): " << (!(x * y < 0) || (y > x)) << endl;

    return 0;
}