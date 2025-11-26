#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double a;

    cout << "Введите целое число n: ";
    cin >> n;
    cout << "Введите вещественное число a: ";
    cin >> a;

    double product = 0.0;
    for (int i = 0; i < abs(n); i++) {
        product += a;
    }

    if (n < 0) {
        product = -product;
    }

    cout << n << " * " << a << " = " << product << endl;

    return 0;
}