#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;
    cout << "Введите числитель и знаменатель дроби: ";
    cin >> a >> b;

    int divisor = gcd(a, b);
    int p = a / divisor;
    int q = b / divisor;

    cout << "Исходная дробь: " << a << "/" << b << endl;
    cout << "Сокращенная дробь: " << p << "/" << q << endl;

    return 0;
}