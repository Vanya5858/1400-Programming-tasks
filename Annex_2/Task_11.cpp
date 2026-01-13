#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a = 32;
    int b = -1;
    b = a - b * 4;
    int c;

    if (a > b) {
        c = 6 * b - 4 * a;
    }
    else {
        c = a - b;
    }

    cout << "c = " << c << endl;

    return 0;
}