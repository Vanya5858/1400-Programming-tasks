#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите три различных числа: ";
    cin >> a >> b >> c;

    double min1 = a, min2 = b;
    if (b < min1) {
        min1 = b;
        min2 = a;
    }
    if (c < min1) {
        min2 = min1;
        min1 = c;
    }
    else if (c < min2) {
        min2 = c;
    }

    cout << "Произведение двух наименьших: " << (min1 * min2) << endl;

    return 0;
}