#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Числа с 5 делителями:" << endl;
    cout << "-------------------" << endl;

    int count = 0;

    for (int n = 1; n <= 300; n++) {
        int divisors = 0;

        for (int d = 1; d <= n; d++) {
            if (n % d == 0) {
                divisors++;
                if (divisors > 5) break; // Оптимизация
            }
        }

        if (divisors == 5) {
            cout << n << " ";
            count++;

            if (count % 10 == 0) {
                cout << endl;
            }
        }
    }

    cout << "\n\nВсего найдено: " << count << " чисел" << endl;

    return 0;
}