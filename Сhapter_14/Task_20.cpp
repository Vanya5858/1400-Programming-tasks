#include <iostream>
#include <cmath>
using namespace std;

bool hasRealRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    return discriminant >= 0;
}

int main() {
    setlocale(LC_ALL, "RU");

    double a, b, c;

    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;

    int count = 0;

    if (hasRealRoots(a, b, c)) count++;

    if (hasRealRoots(b, a, c)) count++;

    if (hasRealRoots(c, a, b)) count++;

    cout << "\nРезультат:" << endl;
    cout << "Количество уравнений с вещественными корнями: " << count << endl;

    return 0;
}