#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;

    cout << "Введите натуральное число n (1 < n <= 10): ";
    cin >> n;

    double sum = 1.0; // начинаем с 1 (1/0!)
    double factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += 1.0 / factorial;
    }

    cout << "1 + 1/1! + 1/2! + ... + 1/" << n << "! = " << sum << endl;

    return 0;
}