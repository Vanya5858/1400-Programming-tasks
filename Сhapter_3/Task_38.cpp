#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // Мы знаем, что после всех операций получилось 456
    int result = 456;

    // Разбираем число 456
    int a = result / 100;           // первая цифра исходного числа x
    int remainder = result % 100;   // оставшаяся часть

    // Из remainder = 10c + b находим b и c
    int c = remainder / 10;         // третья цифра исходного числа x
    int b = remainder % 10;         // вторая цифра исходного числа x

    // Восстанавливаем исходное число x
    int x = 100 * a + 10 * b + c;

    cout << "Найдено число x: " << x << endl;

    // Проверка
    cout << "\nПроверка:\n";
    cout << "1. Зачеркиваем вторую цифру: из " << x << " остается " << (10 * a + c) << endl;
    cout << "2. Приписываем справа вторую цифру " << b << ": получаем " << result << endl;

    return 0;
}