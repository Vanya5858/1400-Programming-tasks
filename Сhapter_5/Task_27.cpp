#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а) сумма всех целых чисел от 200 до 600
    int sum_a = 0;
    for (int i = 200; i <= 600; i++) {
        sum_a += i;
    }
    cout << "а) Сумма от 200 до 600: " << sum_a << endl;

    // б) сумма всех целых чисел от a до 400
    int a;
    cout << "б) Введите a (a <= 400): ";
    cin >> a;
    int sum_b = 0;
    for (int i = a; i <= 400; i++) {
        sum_b += i;
    }
    cout << "Сумма от " << a << " до 400: " << sum_b << endl;

    // в) сумма всех целых чисел от –15 до b
    int b;
    cout << "в) Введите b (b >= -15): ";
    cin >> b;
    int sum_c = 0;
    for (int i = -15; i <= b; i++) {
        sum_c += i;
    }
    cout << "Сумма от -15 до " << b << ": " << sum_c << endl;

    // г) сумма всех целых чисел от a до b
    int a2, b2;
    cout << "г) Введите a и b, через пробел(b >= a): ";
    cin >> a2 >> b2;
    int sum_d = 0;
    for (int i = a2; i <= b2; i++) {
        sum_d += i;
    }
    cout << "Сумма от " << a2 << " до " << b2 << ": " << sum_d << endl;

    return 0;
}