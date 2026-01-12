#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "(число равно сумме своих делителей, кроме самого числа)" << endl;

    cout << "\nПоиск трехзначных совершенных чисел:" << endl;
    cout << "----------------------------------" << endl;

    bool found = false;

    for (int n = 100; n <= 999; n++) {
        int sum = 0;

        // Суммируем все делители, кроме самого числа
        for (int d = 1; d <= n / 2; d++) {
            if (n % d == 0) {
                sum += d;
            }
        }

        if (sum == n) {
            cout << "Найдено совершенное число: " << n << endl;
            cout << "Его делители (кроме самого числа): ";

            // Выводим делители
            bool first = true;
            for (int d = 1; d <= n / 2; d++) {
                if (n % d == 0) {
                    if (!first) cout << " + ";
                    cout << d;
                    first = false;
                }
            }
            cout << " = " << n << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Трехзначных совершенных чисел не найдено" << endl;
    }

    return 0;
}