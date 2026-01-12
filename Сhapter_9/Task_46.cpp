#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    long long number;
    cout << "Введите натуральное число: ";
    cin >> number;

    long long original = number;

    cout << "\nВычисление цифрового корня для числа " << number << ":" << endl;
    cout << "-------------------------------------------" << endl;

    while (number >= 10) {
        // Вычисляем сумму цифр текущего числа
        long long sum = 0;
        long long temp = number;

        cout << number << " -> ";

        while (temp > 0) {
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        cout << "сумма цифр: " << sum << endl;
        number = sum;
    }

    cout << "Цифровой корень: " << number << endl;

    // Быстрый способ: цифровой корень = остаток от деления на 9 (кроме 0)
    cout << "\nБыстрый способ (остаток от деления на 9):" << endl;
    if (original == 0) {
        cout << "Цифровой корень 0 = 0" << endl;
    }
    else {
        int fastRoot = original % 9;
        if (fastRoot == 0) fastRoot = 9;
        cout << original << " mod 9 = " << fastRoot << endl;
    }

    return 0;
}