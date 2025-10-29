#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "Введите четырехзначное число: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Ошибка! Введите четырехзначное число (1000-9999)\n";
        return 1;
    }

    // Извлекаем цифры
    int digit1 = number / 1000;          // первая цифра
    int digit2 = (number / 100) % 10;    // вторая цифра
    int digit3 = (number / 10) % 10;     // третья цифра
    int digit4 = number % 10;            // четвертая цифра

    cout << "Исходное число: " << number << endl;

    // а) Число справа налево
    int result_a = digit4 * 1000 + digit3 * 100 + digit2 * 10 + digit1;
    cout << "а) Число справа налево: " << result_a << endl;

    // б) Перестановка первой и второй, третьей и четвертой цифр
    int result_b = digit2 * 1000 + digit1 * 100 + digit4 * 10 + digit3;
    cout << "б) Перестановка 1<=>2 и 3<=>4: " << result_b << endl;

    // в) Перестановка второй и третьей цифр
    int result_c = digit1 * 1000 + digit3 * 100 + digit2 * 10 + digit4;
    cout << "в) Перестановка 2<=>3: " << result_c << endl;

    // г) Способ 1: с выделением отдельных цифр
    int result_d1 = digit3 * 1000 + digit4 * 100 + digit1 * 10 + digit2;
    cout << "г) Перестановка 12<=>34 (способ 1): " << result_d1 << endl;

    // г) Способ 2: без выделения отдельных цифр
    int first_two_digits = number / 100;      // первые две цифры
    int last_two_digits = number % 100;       // последние две цифры
    int result_d2 = last_two_digits * 100 + first_two_digits;
    cout << "г) Перестановка 12<=>34 (способ 2): " << result_d2 << endl;

    return 0;
}