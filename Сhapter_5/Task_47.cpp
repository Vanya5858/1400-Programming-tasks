#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число n (n >= 4): ";
    cin >> n;

    double v1 = 0, v2 = 0, v3 = 1.5, v;

    if (n == 1) v = v1;
    else if (n == 2) v = v2;
    else if (n == 3) v = v3;
    else {
        for (int i = 4; i <= n; i++) {
            v = ((i - 1.0) / (i * i + 1)) * v3 - v2 + v1;
            v1 = v2;
            v2 = v3;
            v3 = v;
        }
    }

    cout << "v" << n << " = " << v << endl;

    return 0;
}