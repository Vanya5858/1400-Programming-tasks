#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    int original = n;

    cout << "\nРазложение числа " << n << " на простые множители:" << endl;

    // Вариант 1: каждый простой множитель выводится один раз
    cout << "\n1) Каждый множитель один раз:" << endl;
    cout << n << " = ";

    bool first = true;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            // Проверяем, простое ли p
            bool isPrime = true;
            for (int d = 2; d * d <= p; d++) {
                if (p % d == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                if (!first) cout << " * ";
                cout << p;
                first = false;
                while (n % p == 0) {
                    n /= p;
                }
            }
        }
    }

    if (n > 1) {
        if (!first) cout << " * ";
        cout << n;
    }

    // Сбрасываем n для второго варианта
    n = original;

    // Вариант 2: множители выводятся столько раз, сколько входят в разложение
    cout << "\n\n2) Множители с кратностями:" << endl;
    cout << n << " = ";

    first = true;
    int current = 2;

    while (n > 1) {
        if (n % current == 0) {
            if (!first) cout << " * ";
            cout << current;
            first = false;
            n /= current;
        }
        else {
            current++;
        }
    }

    // Восстанавливаем n для подробного вывода
    n = original;

    cout << "\n\nПодробное разложение:" << endl;
    cout << "--------------------" << endl;

    current = 2;
    while (n > 1) {
        int count = 0;

        while (n % current == 0) {
            count++;
            n /= current;
        }

        if (count > 0) {
            cout << current;
            if (count > 1) {
                cout << "^" << count;
            }
            if (n > 1) cout << " * ";
        }

        current++;
    }

    cout << endl;

    return 0;
}