#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int p = 0;
    int q = 30;
    int d = q - 5;
    q = 2 * d;
    p = q - 100;

    cout << "p = " << p << ", q = " << q << endl;

    return 0;
}