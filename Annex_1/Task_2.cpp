#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double x, a, b, c, m, n;
    cout << "Введите значения переменных (x, a, b, c, m, n): ";
    cin >> x >> a >> b >> c >> m >> n;

    cout << "a) -1 / x^2 = " << -1 / pow(x, 2) << endl;
    cout << "б) a / (b * c) = " << a / (b * c) << endl;
    cout << "в) (a / b) * c = " << (a / b) * c << endl;
    cout << "г) (a + b) / 2 = " << (a + b) / 2 << endl;
    cout << "д) 5.45 * (a + 2*b) / (2 - b) = " << 5.45 * (a + 2 * b) / (2 - b) << endl;
    cout << "е) (-b + sqrt(b^2 - 4ac)) / (2a) = " << (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) << endl;
    cout << "ж) (-b + 1/a) / c = " << (-b + 1 / a) / c << endl;
    cout << "з) 1 / (1 + (a + b) / 2) = " << 1 / (1 + (a + b) / 2) << endl;
    cout << "и) 1 / (1 + 1 / (2 + 1 / (2 + 3/5))) = " << 1 / (1 + 1 / (2 + 1 / (2 + 3.0 / 5))) << endl;
    cout << "й) 2^(m^n) = " << pow(2, pow(m, n)) << endl;

    return 0;
}