#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const double M_PI = 3.14159265358979323846;
    double x1, x2, x3, v0, t, a, R, b, c, m1, m2, r, gamma, m, v, g, h, I, R_res, sinx, cosc, alpha;
    cout << "Введите значения переменных (x1, x2, x3, v0, t, a, R, b, c, m1, m2, r, gamma, m, v, g, h, I, R_res, sinx, cosc, alpha): ";
    cin >> x1 >> x2 >> x3 >> v0 >> t >> a >> R >> b >> c >> m1 >> m2 >> r >> gamma >> m >> v >> g >> h >> I >> R_res >> sinx >> cosc >> alpha;

    cout << "a) sqrt(x1^2 + x2^2) = " << sqrt(pow(x1, 2) + pow(x2, 2)) << endl;
    cout << "б) x1*x2 + x1*x3 + x2*x3 = " << x1 * x2 + x1 * x3 + x2 * x3 << endl;
    cout << "в) v0*t + a*t^2/2 = " << v0 * t + a * pow(t, 2) / 2 << endl;
    cout << "г) m*v^2/2 + m*g*h = " << m * pow(v, 2) / 2 + m * g * h << endl;
    cout << "д) 1/R1 + 1/R2 (здесь R1 = R, R2 = R_res) = " << 1 / R + 1 / R_res << endl;
    cout << "е) m*g*cos(alpha) = " << m * g * cos(alpha) << endl;
    cout << "ж) 2*pi*R = " << 2 * M_PI * R << endl;
    cout << "з) b^2 - 4*a*c = " << pow(b, 2) - 4 * a * c << endl;
    cout << "и) gamma * m1*m2 / r^2 = " << gamma * m1 * m2 / pow(r, 2) << endl;
    cout << "к) I^2 * R = " << pow(I, 2) * R << endl;
    cout << "л) a*b*sin(c) = " << a * b * sin(cosc) << endl;
    cout << "м) sqrt(a^2 + b^2 - 2*a*b*cos(c)) = " << sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(cosc)) << endl;
    cout << "н) (a*d + b*c)/(a*d) (d = x1) = " << (a * x1 + b * c) / (a * x1) << endl;
    cout << "о) sqrt(1 - sin^2(x)) = " << sqrt(1 - pow(sinx, 2)) << endl;
    cout << "п) 1 / sqrt(a*x^2 + b*x + c) = " << 1 / sqrt(a * pow(x1, 2) + b * x1 + c) << endl;
    cout << "р) (sqrt(x+1) + sqrt(x-1)) / (2*sqrt(x)) (x = x1) = " << (sqrt(x1 + 1) + sqrt(x1 - 1)) / (2 * sqrt(x1)) << endl;
    cout << "с) |x| + |x+1| (x = x1) = " << fabs(x1) + fabs(x1 + 1) << endl;
    cout << "т) |1 - |x|| (x = x1) = " << fabs(1 - fabs(x1)) << endl;

    return 0;
}