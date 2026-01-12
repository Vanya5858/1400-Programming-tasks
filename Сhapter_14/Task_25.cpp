#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "RU");

    long long numerator = 2 * factorial(5) + 3 * factorial(8);
    long long denominator = factorial(6) + factorial(4);
    double result = (double)numerator / denominator;

    cout << "Вычисление выражения (2*5! + 3*8!) / (6! + 4!)" << endl;
    cout << "5! = " << factorial(5) << endl;
    cout << "8! = " << factorial(8) << endl;
    cout << "6! = " << factorial(6) << endl;
    cout << "4! = " << factorial(4) << endl;
    cout << "Числитель: " << numerator << endl;
    cout << "Знаменатель: " << denominator << endl;
    cout << "Результат: " << result << endl;

    return 0;
}