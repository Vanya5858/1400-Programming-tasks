#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a;
    int n;

    cout << "Введите вещественное число a: ";
    cin >> a;
    cout << "Введите целое число n: ";
    cin >> n;

    double result = 1.0;

    if (n > 0) {
        for (int i = 0; i < n; i++) {
            result *= a;
        }
    }
    else if (n < 0) {
        for (int i = 0; i < -n; i++) {
            result *= a;
        }
        result = 1.0 / result;
    }

    cout << a << "^" << n << " = " << result << endl;

    return 0;
}