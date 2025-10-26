#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;

    // Ввод чисел
    cout << "\t\t\tВыполнение арифметических операций над двумя числами" << "\n";
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    // Вычисление операций
    double sum = a + b;
    double difference = a - b;
    double product = a * b;

    // Вывод результатов для суммы, разности и произведения
    cout << "\nРезультаты:" << "\n";
    cout << a << " + " << b << " = " << sum << "\n";
    cout << a << " - " << b << " = " << difference << "\n";
    cout << a << " * " << b << " = " << product << "\n";

    // Проверка деления на ноль
    if (b != 0) {
        double quotient = a / b;
        cout << a << " / " << b << " = " << quotient << "\n";
    }
    else {
        cout << a << " / " << b << " = Ошибка: деление на ноль!" << "\n";
    }

    return 0;
}