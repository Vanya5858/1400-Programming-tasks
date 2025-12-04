#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, z;
    cout << "Введите a: ";
    cin >> a;

    if (a > 0) {
        z = 1;
    }
    else if (a == 0) {
        z = 0;
    }
    else {
        z = -1;
    }

    cout << "z = " << z << endl;

    return 0;
}