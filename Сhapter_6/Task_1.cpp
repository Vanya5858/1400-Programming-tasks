#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    cout << "Введите a и b (a > b): ";
    cin >> a >> b;

    // а) Целочисленное деление
    int quotient = 0;
    int temp = a;
    while (temp >= b) {
        temp -= b;
        quotient++;
    }
    cout << "Целочисленное деление: " << quotient << endl;

    // б) Остаток от деления
    int remainder = a;
    while (remainder >= b) {
        remainder -= b;
    }
    cout << "Остаток от деления: " << remainder << endl;

    return 0;
}