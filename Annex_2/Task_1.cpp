#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // a)
    int s = 25;
    s = 55;
    cout << "a) s = " << s << endl;

    // б)
    s = 5;
    s = -2 * s;
    cout << "б) s = " << s << endl;

    // в)
    double s_d = -3.5;
    s_d = 4 * s_d;
    cout << "в) s = " << s_d << endl;

    // г)
    s = 20;
    s = -21;
    s = 0;
    s = 5 * s;
    cout << "г) s = " << s << endl;

    return 0;
}