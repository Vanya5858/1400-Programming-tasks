#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a;
    cout << "Введите a (0 < a <= 1): ";
    cin >> a;

    int znam = 1;
    while (1.0 / znam >= a) {
        znam++;
    }
    cout << "Первая дробь < a: 1/" << znam << " = " << 1.0 / znam << endl;
    return 0;
}