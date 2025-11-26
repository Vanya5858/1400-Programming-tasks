#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

    double sum = 0;
    double sign = 1.0;  // начинаем с плюса

    for (int i = 1; i <= n; i++) {
        sum += sign / i;
        sign = -sign;   // меняем знак на каждой итерации
    }

    cout << "1 - 1/2 + 1/3 - ... + (-1)^" << n - 1 << " * 1/" << n << " = " << sum << endl;

    return 0;
}