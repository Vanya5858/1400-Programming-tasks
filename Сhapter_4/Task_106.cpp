#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;

    if (sqrt(b) < a) {
        b *= 5;
        cout << "Второе число увеличено в 5 раз: " << b << endl;
    }

    return 0;
}