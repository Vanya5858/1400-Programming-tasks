#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;

    // Ввод двух целых чисел
    cout << "Введите два целых числа через пробел: ";
    cin >> a >> b;

    // Вычисление операций
    int sum = a + b;
    int difference = a - b;
    int product = a * b;

    // Вывод результатов
    cout << a << "+" << b << "=" << sum << "\n";
    cout << a << "-" << b << "=" << difference << "\n";
    cout << a << "*" << b << "=" << product << "\n";

    // Деление с проверкой на ноль
    if (b != 0) {
        double quotient = (double)a / b;  // обычное приведение типа
        cout << a << "/" << b << "=" << quotient << "\n";
    }
    else {
        cout << a << "/" << b << "= невозможно (деление на ноль)" << "\n";
    }

    // Среднее арифметическое
    double average = (a + b) / 2.0;  // 2.0 - вещественное число
    cout << "(" << a << "+" << b << ")/2=" << average << "\n";

    return 0;
}