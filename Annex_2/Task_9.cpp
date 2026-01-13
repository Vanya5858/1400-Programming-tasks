#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a = 40;
    int b = 10;
    b = -a / 2 * b;
    int c;

    if (a < b) {
        c = b - a;
    }
    else {
        c = a - 2 * b;
    }

    cout << "c = " << c << endl;

    return 0;
}