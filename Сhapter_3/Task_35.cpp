#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int result;
    cout << "Введите значение n(1 <= n <= 999): ";
    cin >> result;

    if (result < 1 || result > 999) {
        cout << "Ошибка! Число n должно быть в диапазоне 1 ≤ n ≤ 999\n\n";
        return 1;
    }

    // Разбираем число 564
    int b = result / 100;           // вторая цифра исходного числа (стала первой)
    int remainder = result % 100;   // оставшаяся часть

    // Из remainder = 10c + a находим a и c
    int c = remainder / 10;         // третья цифра исходного числа
    int a = remainder % 10;         // первая цифра исходного числа

    // Восстанавливаем исходное число x
    int x = 100 * a + 10 * b + c;

    cout << "Найдено число x: " << x << endl;

    // Проверка
    cout << "\nПроверка:\n";
    cout << "1. Зачеркиваем первую цифру: из " << x << " остается " << (10 * b + c) << endl;
    cout << "2. Умножаем на 10: " << (10 * b + c) << " * 10 = " << (10 * b + c) * 10 << endl;
    cout << "3. Складываем с первой цифрой " << a << ": " << (10 * b + c) * 10 << " + " << a << " = " << result << endl;

    return 0;
}