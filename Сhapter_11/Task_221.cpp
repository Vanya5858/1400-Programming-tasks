#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int N = 100;  // 2^100
    vector<int> digits(1, 1);  // Начинаем с 1 (2^0 = 1)

    cout << "Вычисление 2^" << N << "...\n";

    // Умножаем на 2 N раз
    for (int i = 0; i < N; i++) {
        int carry = 0;

        // Умножаем каждую цифру на 2
        for (int j = 0; j < digits.size(); j++) {
            int product = digits[j] * 2 + carry;
            digits[j] = product % 10;
            carry = product / 10;
        }

        // Добавляем новый разряд при необходимости
        while (carry > 0) {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Выводим результат
    cout << "\n2^" << N << " = ";
    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }

    cout << "\n\nХарактеристики числа:\n";
    cout << "Количество цифр: " << digits.size() << endl;
    cout << "Первые 10 цифр: ";
    for (int i = digits.size() - 1; i >= digits.size() - 10 && i >= 0; i--) {
        cout << digits[i];
    }
    cout << "\nПоследние 10 цифр: ";
    for (int i = min(9, (int)digits.size() - 1); i >= 0; i--) {
        cout << digits[i];
    }

    // Также можно вывести все цифры последовательно
    cout << "\n\nПоследовательность цифр (от старшей к младшей):\n";
    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i] << " ";
        if ((digits.size() - i) % 10 == 0) cout << "\n";  // По 10 цифр в строке
    }

    return 0;
}