#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double a = 40;
    double b = 10;
    b = -a / 2 * b;
    double v = b + a * 2;

    cout << "v = " << v << endl;

    return 0;
}