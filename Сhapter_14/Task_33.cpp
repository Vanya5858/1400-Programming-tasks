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

// Функция для расчета НОД трех чисел
int gcdThree(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int main() {
    setlocale(LC_ALL, "RU");

    int a, b, c;

    cout << "Введите три натуральных числа:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    int result = gcdThree(a, b, c);

    cout << "\nНОД(" << a << ", " << b << ", " << c << ") = " << result << endl;
    cout << "НОД(" << a << ", " << b << ") = " << gcd(a, b) << endl;
    cout << "НОД(НОД(" << a << ", " << b << "), " << c << ") = " << gcd(gcd(a, b), c) << endl;

    return 0;
}