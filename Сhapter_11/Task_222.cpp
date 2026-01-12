#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int N = 100;  // 100!
    vector<int> digits(1, 1);  // Начинаем с 1 (1! = 1)

    cout << "Вычисление " << N << "! (факториал 100)...\n\n";

    // Вычисляем факториал поэтапно: 1 * 2 * 3 * ... * 100
    for (int factor = 2; factor <= N; factor++) {
        int carry = 0;

        // Умножаем текущее число на следующий множитель
        for (int j = 0; j < digits.size(); j++) {
            int product = digits[j] * factor + carry;
            digits[j] = product % 10;
            carry = product / 10;
        }

        // Добавляем новые разряды при необходимости
        while (carry > 0) {
            digits.push_back(carry % 10);
            carry /= 10;
        }

        // Выводим прогресс каждые 10 множителей
        if (factor % 10 == 0) {
            cout << "Вычислено: " << factor << "! (" << digits.size() << " цифр)\n";
        }
    }

    // Выводим результат
    cout << "\n===================================\n";
    cout << "100! = \n";

    // Выводим число с разбивкой по строкам
    int lineCount = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
        lineCount++;
        if (lineCount % 50 == 0) cout << "\n";  // 50 цифр в строке
    }

    cout << "\n\nХарактеристики числа 100!:\n";
    cout << "Количество цифр: " << digits.size() << endl;
    cout << "Первые 20 цифр: ";
    for (int i = digits.size() - 1; i >= digits.size() - 20 && i >= 0; i--) {
        cout << digits[i];
    }
    cout << "\nПоследние 20 цифр: ";
    for (int i = min(19, (int)digits.size() - 1); i >= 0; i--) {
        cout << digits[i];
    }

    // Подсчитываем нули в конце (сколько раз делится на 10)
    int trailingZeros = 0;
    int temp = N;
    while (temp >= 5) {
        temp /= 5;
        trailingZeros += temp;
    }

    cout << "\nКоличество нулей в конце: " << trailingZeros << endl;

    return 0;
}