#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double x, n, y, a, b, alpha, beta;
    cout << "Введите значения переменных (x, n, y, a, b, alpha, beta): ";
    cin >> x >> n >> y >> a >> b >> alpha >> beta;

    cout << "a) 2x = " << 2 * x << endl;
    cout << "б) sin(x) = " << sin(x) << endl;
    cout << "в) a^2 = " << pow(a, 2) << endl;
    cout << "г) sqrt(x) = " << sqrt(x) << endl;
    cout << "д) |n| = " << fabs(n) << endl;
    cout << "е) 5cos(y) = " << 5 * cos(y) << endl;
    cout << "ж) 9.5a^2 = " << 9.5 * pow(a, 2) << endl;
    cout << "з) 3sqrt(x) = " << 3 * sqrt(x) << endl;
    cout << "и) sinAcosB + cosAsinB = " << sin(alpha) * cos(beta) + cos(alpha) * sin(beta) << endl;
    cout << "к) a(sqrt(2b)) = " << a * sqrt(2 * b) << endl;
    cout << "л) 4sin(2A)cosB = " << 4 * sin(2 * alpha) * cos(beta) << endl;
    cout << "м) -5sqrt((x + sqrt(y))) = " << -5 * sqrt(x + sqrt(y)) << endl;

    return 0;
}