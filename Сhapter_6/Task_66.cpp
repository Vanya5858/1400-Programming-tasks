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

    int a, b, c;
    cout << "Введите три натуральных числа: ";
    cin >> a >> b >> c;

    int result = gcd(gcd(a, b), c);

    cout << "НОД(" << a << ", " << b << ", " << c << ") = " << result << endl;

    return 0;
}