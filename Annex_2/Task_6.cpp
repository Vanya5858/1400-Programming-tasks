#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // a)
    double a = 3.4;
    double b = -5.1;
    b = a;
    a = b;
    cout << "a) a = " << a << ", b = " << b << endl;

    // б)
    a = 9.4;
    b = 15.1;
    b = a;
    a = b;
    cout << "б) a = " << a << ", b = " << b << endl;

    return 0;
}