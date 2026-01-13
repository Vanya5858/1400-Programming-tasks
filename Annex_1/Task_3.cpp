#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double a, b, c, d;
    cout << "Введите значения a, b, c, d: ";
    cin >> a >> b >> c >> d;

    cout << "a) a / b / c = " << a / b / c << endl;
    cout << "б) a + b / c = " << a + b / c << endl;
    cout << "в) (a + b) / c = " << (a + b) / c << endl;
    cout << "г) a * b / (c + 2) = " << a * b / (c + 2) << endl;
    cout << "д) a / b * (c - 3) / d = " << a / b * (c - 3) / d << endl;
    cout << "е) (a/3 + b/2) / (b + c/(2 + b)) = " << (a / 3 + b / 2) / (b + c / (2 + b)) << endl;

    return 0;
}