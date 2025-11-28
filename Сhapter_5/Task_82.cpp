#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    //а) Сумма квадратов цифр делится на 13
    cout << "а) Двузначные числа, сумма квадратов цифр которых делится на 13:\n";
    int count_c = 0;
    for (int i = 10; i <= 99; i++) {
        int digit1 = i / 10;
        int digit2 = i % 10;
        int sum_squares = digit1 * digit1 + digit2 * digit2;
        if (sum_squares % 13 == 0) {
            cout << i << " (" << digit1 << "^2 + " << digit2 << "^2 = " << sum_squares << ")\n";
            count_c++;
        }
    }
    cout << "Всего: " << count_c << " чисел\n";

    //б) Сумма цифр + квадрат суммы цифр = число
    cout << "\nб) Двузначные числа, для которых сумма цифр + квадрат суммы цифр = число:\n";
    int count_d = 0;
    for (int i = 10; i <= 99; i++) {
        int digit1 = i / 10;
        int digit2 = i % 10;
        int sum_digits = digit1 + digit2;
        int result = sum_digits + sum_digits * sum_digits;
        if (result == i) {
            cout << i << " (" << sum_digits << " + " << sum_digits << "^2 = " << result << ")\n";
            count_d++;
        }
    }
    cout << "Всего: " << count_d << " чисел\n";
    return 0;
}