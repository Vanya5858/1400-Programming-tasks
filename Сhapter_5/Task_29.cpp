#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а) среднее арифметическое всех целых чисел от 1 до 750
    int sum_a = 0;
    int count_a = 0;
    for (int i = 1; i <= 750; i++) {
        sum_a += i;
        count_a++;
    }
    double average_a = (double)sum_a / count_a;
    cout << "а) Среднее арифметическое от 1 до 750: " << average_a << endl;

    // б) среднее арифметическое всех целых чисел от 150 до b
    int b;
    cout << "б) Введите b (b >= 150): ";
    cin >> b;
    int sum_b = 0;
    int count_b = 0;
    for (int i = 150; i <= b; i++) {
        sum_b += i;
        count_b++;
    }
    double average_b = (double)sum_b / count_b;
    cout << "Среднее арифметическое от 150 до " << b << ": " << average_b << endl;

    // в) среднее арифметическое всех целых чисел от a до 200
    int a;
    cout << "в) Введите a (a <= 200): ";
    cin >> a;
    int sum_c = 0;
    int count_c = 0;
    for (int i = a; i <= 200; i++) {
        sum_c += i;
        count_c++;
    }
    double average_c = (double)sum_c / count_c;
    cout << "Среднее арифметическое от " << a << " до 200: " << average_c << endl;

    // г) среднее арифметическое всех целых чисел от a до b
    int a2, b2;
    cout << "г) Введите a и b, через пробел (b >= a): ";
    cin >> a2 >> b2;
    int sum_d = 0;
    int count_d = 0;
    for (int i = a2; i <= b2; i++) {
        sum_d += i;
        count_d++;
    }
    double average_d = (double)sum_d / count_d;
    cout << "Среднее арифметическое от " << a2 << " до " << b2 << ": " << average_d << endl;

    return 0;
}