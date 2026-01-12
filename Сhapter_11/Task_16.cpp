#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // а) Арифметическая прогрессия
    cout << "\nа) 10 первых членов арифметической прогрессии:" << endl;

    int a1, d;
    cout << "Введите первый член a: ";
    cin >> a1;
    cout << "Введите разность d: ";
    cin >> d;

    const int SIZE_A = 10;
    int arith[SIZE_A];

    arith[0] = a1;
    for (int i = 1; i < SIZE_A; i++) {
        arith[i] = arith[i - 1] + d;
    }

    cout << "Прогрессия: ";
    for (int i = 0; i < SIZE_A; i++) {
        cout << arith[i] << " ";
    }
    cout << endl;

    // б) Геометрическая прогрессия
    cout << "\nб) 20 первых членов геометрической прогрессии:" << endl;

    double b1, q;
    cout << "Введите первый член a: ";
    cin >> b1;
    cout << "Введите знаменатель z: ";
    cin >> q;

    const int SIZE_B = 20;
    double geom[SIZE_B];

    geom[0] = b1;
    for (int i = 1; i < SIZE_B; i++) {
        geom[i] = geom[i - 1] * q;
    }

    cout << "Прогрессия: " << endl;
    for (int i = 0; i < SIZE_B; i++) {
        cout << geom[i] << " ";
        if ((i + 1) % 5 == 0) cout << endl;
    }
    cout << endl;

    return 0;
}