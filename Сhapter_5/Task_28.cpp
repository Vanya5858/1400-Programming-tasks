#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а) произведение всех целых чисел от 7 до 14
    long long product_a = 1;
    for (int i = 7; i <= 14; i++) {
        product_a *= i;
    }
    cout << "а) Произведение от 7 до 14: " << product_a << endl;

    // б) произведение всех целых чисел от a до 15
    int a;
    cout << "б) Введите a (1 <= a <= 15): ";
    cin >> a;
    long long product_b = 1;
    for (int i = a; i <= 15; i++) {
        product_b *= i;
    }
    cout << "Произведение от " << a << " до 15: " << product_b << endl;

    // в) произведение всех целых чисел от 1 до b
    int b;
    cout << "в) Введите b (1 <= b <= 10): ";
    cin >> b;
    long long product_c = 1;
    for (int i = 1; i <= b; i++) {
        product_c *= i;
    }
    cout << "Произведение от 1 до " << b << ": " << product_c << endl;

    // г) произведение всех целых чисел от a до b
    int a2, b2;
    cout << "г) Введите a и b, введите через пробел(b >= a): ";
    cin >> a2 >> b2;
    long long product_d = 1;
    for (int i = a2; i <= b2; i++) {
        product_d *= i;
    }
    cout << "Произведение от " << a2 << " до " << b2 << ": " << product_d << endl;

    return 0;
}