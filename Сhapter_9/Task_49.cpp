#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    cout << "\nПростые делители числа " << n << ":" << endl;
    cout << "----------------------------" << endl;

    vector<int> divisors;
    int original = n;

    // Находим все простые делители
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            // Проверяем, простое ли d
            bool isPrime = true;
            for (int i = 2; i * i <= d; i++) {
                if (d % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                divisors.push_back(d);
            }

            // Проверяем парный делитель
            int pair = n / d;
            if (pair != d && n % pair == 0) {
                isPrime = true;
                for (int i = 2; i * i <= pair; i++) {
                    if (pair % i == 0) {
                        isPrime = false;
                        break;
                    }
                }

                if (isPrime) {
                    divisors.push_back(pair);
                }
            }
        }
    }

    // Если само число простое
    if (divisors.empty()) {
        bool isPrime = true;
        if (n > 1) {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                divisors.push_back(n);
            }
        }
    }

    // Сортируем делители
    sort(divisors.begin(), divisors.end());

    // Удаляем дубликаты
    divisors.erase(unique(divisors.begin(), divisors.end()), divisors.end());

    // Выводим результат
    if (divisors.empty()) {
        cout << "Число " << n << " не имеет простых делителей (1 или 0)" << endl;
    }
    else {
        cout << "Простые делители: ";
        for (size_t i = 0; i < divisors.size(); i++) {
            cout << divisors[i];
            if (i < divisors.size() - 1) cout << ", ";
        }
        cout << endl;

        cout << "\nПроверка:" << endl;
        for (int d : divisors) {
            cout << n << " / " << d << " = " << (n / d)
                << " (остаток " << (n % d) << ")" << endl;
        }
    }

    return 0;
}