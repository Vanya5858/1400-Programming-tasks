#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а) сумма кубов всех целых чисел от 25 до 40
    long long sum_a = 0;
    for (int i = 25; i <= 40; i++) {
        sum_a += i * i * i;
    }
    cout << "а) Сумма кубов от 25 до 40: " << sum_a << endl;

    // б) сумма квадратов всех целых чисел от a до 50
    int a;
    cout << "б) Введите a (0 <= a <= 50): ";
    cin >> a;
    long long sum_b = 0;
    for (int i = a; i <= 50; i++) {
        sum_b += i * i;
    }
    cout << "Сумма квадратов от " << a << " до 50: " << sum_b << endl;

    // в) сумма квадратов всех целых чисел от 1 до n
    int n;
    cout << "в) Введите n (1 <= n <= 100): ";
    cin >> n;
    long long sum_c = 0;
    for (int i = 1; i <= n; i++) {
        sum_c += i * i;
    }
    cout << "Сумма квадратов от 1 до " << n << ": " << sum_c << endl;

    // г) сумма квадратов всех целых чисел от a до b
    int a2, b2;
    cout << "г) Введите a и b, через проблем(b >= a): ";
    cin >> a2 >> b2;
    long long sum_d = 0;
    for (int i = a2; i <= b2; i++) {
        sum_d += i * i;
    }
    cout << "Сумма квадратов от " << a2 << " до " << b2 << ": " << sum_d << endl;

    return 0;
}