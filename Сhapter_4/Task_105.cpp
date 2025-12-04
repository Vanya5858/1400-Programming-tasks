#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;

    // Приводим к абсолютным величинам
    double abs_a = a, abs_b = b;
    if (a < 0) abs_a = -a;
    if (b < 0) abs_b = -b;

    if (abs_a > abs_b) {
        a /= 2;
        cout << "Первое число уменьшено в 2 раза: " << a << endl;
    }

    return 0;
}