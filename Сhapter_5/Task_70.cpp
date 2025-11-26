#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double x;
    int n;

    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите натуральное число n (1 < n <= 10): ";
    cin >> n;

    double sum = 1.0; // первый член ряда (x^0/0!)
    double term = 1.0; // текущий член ряда
    double factorial = 1.0;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        term *= x;
        sum += term / factorial;
    }

    cout << "1 + x/1! + x^2/2! + ... + x^" << n << "/" << n << "! = " << sum << endl;
    cout << "При x = " << x << " и n = " << n << endl;

    return 0;
}