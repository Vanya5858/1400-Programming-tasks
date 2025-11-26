#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int x, y;

    cout << "Введите натуральные числа x и y: ";
    cin >> x >> y;

    // Способ 1: сложение x, y раз
    int product1 = 0;
    for (int i = 0; i < y; i++) {
        product1 += x;
    }

    // Способ 2: сложение y, x раз
    int product2 = 0;
    for (int i = 0; i < x; i++) {
        product2 += y;
    }

    cout << "Способ 1: " << x << " * " << y << " = " << product1 << endl;
    cout << "Способ 2: " << x << " * " << y << " = " << product2 << endl;

    return 0;
}