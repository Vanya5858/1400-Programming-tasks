#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // a)
    int s = 13;
    int k = -5;
    int d = s + 2;
    s = d;
    k = 2 * s;
    cout << "a) s = " << s << ", k = " << k << endl;

    // б)
    s = 0;
    k = 15;
    d = k - 2;
    k = 3 * d;
    s = k - 50;
    cout << "б) s = " << s << ", k = " << k << endl;

    return 0;
}