#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a = 5;
    a = a + 6;
    int b = -a;
    int c = a - 2 * b;

    cout << "c = " << c << endl;

    return 0;
}