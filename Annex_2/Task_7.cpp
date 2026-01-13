#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int s = 14;
    int k = -3;
    int d = s + 1;
    s = d;
    k = 2 * s;

    cout << "s = " << s << ", k = " << k << endl;

    return 0;
}