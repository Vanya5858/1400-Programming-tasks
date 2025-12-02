#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите коэффициенты a, b, c (a != 0): ";
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Два различных корня: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (D == 0) {
        double x = -b / (2 * a);
        cout << "Один корень (кратности 2): x = " << x << endl;
    }
    else {
        cout << "Действительных корней нет\n";
    }

    return 0;
}