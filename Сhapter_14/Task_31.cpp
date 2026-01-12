#include <iostream>
using namespace std;

// Функция для расчета НОД (алгоритм Евклида)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функция для расчета НОК
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;

    cout << "Введите два натуральных числа:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    int result = lcm(a, b);

    cout << "\nНОК(" << a << ", " << b << ") = " << result << endl;
    cout << "НОД(" << a << ", " << b << ") = " << gcd(a, b) << endl;

    return 0;
}