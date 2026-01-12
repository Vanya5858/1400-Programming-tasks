#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Все совершенные числа меньше 100000" << endl;

    cout << "\nСовершенные числа:" << endl;
    cout << "-----------------" << endl;

    int n = 1;

    while (n < 100000) {
        int sum = 0;
        int d = 1;

        // Суммируем делители с помощью while
        while (d <= n / 2) {
            if (n % d == 0) {
                sum += d;
            }
            d++;
        }

        if (sum == n) {
            cout << n << " ";

            // Выводим разложение
            cout << "= ";
            d = 1;
            bool first = true;
            while (d <= n / 2) {
                if (n % d == 0) {
                    if (!first) cout << " + ";
                    cout << d;
                    first = false;
                }
                d++;
            }
            cout << endl;
        }

        n++;
    }

    return 0;
}