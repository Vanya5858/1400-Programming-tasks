#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;

    cout << "Задача 5.72 - Вычисление всех выражений\n";
    cout << "Введите натуральное число n: ";
    cin >> n;

    // а) сумма 1/sin1 + 1/(sin1+sin2) + ... + 1/(sin1+...+sinn)
    double total_sum_a = 0.0;
    double sin_sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sin_sum += sin(i);
        total_sum_a += 1.0 / sin_sum;
    }

    // б) sqrt(2 + sqrt(2 + ... + sqrt(2)))
    double result_b = 0.0;
    for (int i = 0; i < n; i++) {
        result_b = sqrt(2 + result_b);
    }

    // в) cos1/sin1 + (cos1+cos2)/(sin1+sin2) + ... + (cos1+...+cosn)/(sin1+...+sin2n)
    double total_sum_c = 0.0;
    double cos_sum = 0.0;
    double sin_sum_c = 0.0;

    for (int i = 1; i <= n; i++) {
        cos_sum += cos(i);
        sin_sum_c += sin(i);
        total_sum_c += cos_sum / sin_sum_c;
    }

    // г) sqrt(3 + sqrt(6 + ... + sqrt(3n)))
    double result_d = 0.0;
    for (int i = n; i >= 1; i--) {
        result_d = sqrt(3 * i + result_d);
    }

    // Вывод всех результатов
    cout << "\nРезультаты для n = " << n << ":\n";
    cout << "а) 1/sin1 + 1/(sin1+sin2) + ... + 1/(sin1+...+sin" << n << ") = " << total_sum_a << endl;
    cout << "б) sqrt(2 + sqrt(2 + ... + sqrt(2))) [" << n << " корней] = " << result_b << endl;
    cout << "в) cos1/sin1 + (cos1+cos2)/(sin1+sin2) + ... + (cos1+...+cos" << n << ")/(sin1+...+sin" << n << ") = " << total_sum_c << endl;
    cout << "г) sqrt(3 + sqrt(6 + ... + sqrt(" << 3 * n << "))) = " << result_d << endl;

    return 0;
}