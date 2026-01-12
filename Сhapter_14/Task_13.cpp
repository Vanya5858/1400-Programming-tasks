#include <iostream>
using namespace std;

int sign(double a) {
    if (a > 0) return 1;
    else if (a == 0) return 0;
    else return -1;
}

int main() {
    setlocale(LC_ALL, "RU");

    double x, y;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    int z = sign(x) + sign(y);

    cout << "\nРезультат:" << endl;
    cout << "sign(x) = " << sign(x) << endl;
    cout << "sign(y) = " << sign(y) << endl;
    cout << "z = sign(x) + sign(y) = " << z << endl;

    return 0;
}