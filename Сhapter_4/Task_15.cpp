#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D >= 0) {
        cout << "Уравнение имеет вещественные корни\n";
    }
    else {
        cout << "Уравнение не имеет вещественных корней\n";
    }

    return 0;
}