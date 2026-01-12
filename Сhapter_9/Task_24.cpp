#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    int maxDivisors = 0;
    int numberWithMax = a;

    // Находим максимальное количество делителей
    for (int n = a; n <= b; n++) {
        int divisors = 0;

        for (int d = 1; d <= n; d++) {
            if (n % d == 0) {
                divisors++;
            }
        }

        if (divisors > maxDivisors) {
            maxDivisors = divisors;
            numberWithMax = n;
        }
    }

    cout << "\nМаксимальное количество делителей: " << maxDivisors << endl;

    // а) Максимальное из чисел с максимальным количеством делителей
    int maxNumber = numberWithMax;
    for (int n = numberWithMax + 1; n <= b; n++) {
        int divisors = 0;
        for (int d = 1; d <= n; d++) {
            if (n % d == 0) divisors++;
        }
        if (divisors == maxDivisors && n > maxNumber) {
            maxNumber = n;
        }
    }
    cout << "а) Максимальное число: " << maxNumber << endl;

    // б) Минимальное из чисел с максимальным количеством делителей
    int minNumber = a;
    for (int n = a; n <= b; n++) {
        int divisors = 0;
        for (int d = 1; d <= n; d++) {
            if (n % d == 0) divisors++;
        }
        if (divisors == maxDivisors) {
            minNumber = n;
            break;
        }
    }
    cout << "б) Минимальное число: " << minNumber << endl;

    return 0;
}