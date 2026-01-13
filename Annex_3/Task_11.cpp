#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int x, y;

    // a)
    x = 1; y = -1;
    cout << "a) x^2 + y^2 <= 4 при x=1, y=-1: " << (pow(x, 2) + pow(y, 2) <= 4) << endl;

    // б)
    x = 1; y = 2;
    cout << "б) (x > 0) или (y^2 != 4): " << ((x > 0) || (pow(y, 2) != 4)) << endl;

    // в)
    cout << "в) (x > 0) и (y^2 != 4): " << ((x > 0) && (pow(y, 2) != 4)) << endl;

    // г)
    x = 2; y = 1;
    cout << "г) (x*y != 0) и (y > x): " << ((x * y != 0) && (y > x)) << endl;

    // д)
    cout << "д) (x*y != 0) или (y < x): " << ((x * y != 0) || (y < x)) << endl;

    // е)
    cout << "е) не(x*y < 0) и (y > x): " << (!(x * y < 0) && (y > x)) << endl;

    // ж)
    x = 1; y = 2;
    cout << "ж) не(x*y < 0) или (y > x): " << (!(x * y < 0) || (y > x)) << endl;

    return 0;
}