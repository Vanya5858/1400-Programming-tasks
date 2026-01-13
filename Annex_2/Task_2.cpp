#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // a)
    int x = 20;
    x = -20;
    cout << "a) x = " << x << endl;

    // б)
    double x_d = 23.5;
    x_d = x_d * 2;
    cout << "б) x = " << x_d << endl;

    // в)
    x = 50;
    x = x + 5;
    x = 0;
    cout << "в) x = " << x << endl;

    // г)
    x = -30;
    int k = -40;
    x = x + k;
    cout << "г) x = " << x << endl;

    return 0;
}