#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а) Сумма чисел Фибоначчи, не превышающих 1000
    int a = 1, b = 1, sum = 0;
    while (a <= 1000) {
        sum += a;
        int c = a + b;
        a = b;
        b = c;
    }
    cout << "Сумма чисел Фибоначчи <= 1000: " << sum << endl;

    // б) Первое число Фибоначчи, большее n
    int n;
    cout << "Введите n (>1): ";
    cin >> n;

    a = 1, b = 1;
    while (a <= n) {
        int c = a + b;
        a = b;
        b = c;
    }
    cout << "Первое число Фибоначчи > n: " << a << endl;

    return 0;
}