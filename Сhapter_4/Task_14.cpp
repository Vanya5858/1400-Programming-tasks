#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double R1, R2, U1, U2;
    cout << "Введите сопротивление первого участка: ";
    cin >> R1;
    cout << "Введите сопротивление второго участка: ";
    cin >> R2;
    cout << "Введите напряжение на первом участке: ";
    cin >> U1;
    cout << "Введите напряжение на втором участке: ";
    cin >> U2;

    double I1 = U1 / R1;
    double I2 = U2 / R2;

    if (I1 < I2) {
        cout << "Меньший ток на первом участке: " << I1 << " А" << endl;
    }
    else {
        cout << "Меньший ток на втором участке: " << I2 << " А" << endl;
    }

    return 0;
}