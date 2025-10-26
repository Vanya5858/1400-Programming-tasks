#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;

    // Ввод чисел
    cout << "\t\tНахождение среднего арифметического и среднего геометрического модулей" << "\n";
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    // Вычисление модулей
    double abs_a = fabs(a);
    double abs_b = fabs(b);

    // Вычисление среднего арифметического модулей
    double arithmetic_mean = (abs_a + abs_b) / 2;

    // Вычисление среднего геометрического модулей
    double geometric_mean = sqrt(abs_a * abs_b);

    // Вывод результата
    cout << "\nРезультат:" << "\n";
    cout << "Модули чисел: |a| = " << abs_a << ", |b| = " << abs_b << "\n";
    cout << "Среднее арифметическое модулей = (|a| + |b|) / 2 = " << arithmetic_mean << "\n";
    cout << "Среднее геометрическое модулей = sqrt(|a| * |b|) = " << geometric_mean << "\n\n";

    return 0;
}