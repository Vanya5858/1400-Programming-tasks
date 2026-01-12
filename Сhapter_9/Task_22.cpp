#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Числа с 6 делителями:" << endl;
    cout << "-------------------" << endl;

    int count = 0;

    for (int n = 200; n <= 500; n++) {
        int divisors = 0;

        for (int d = 1; d <= n; d++) {
            if (n % d == 0) {
                divisors++;
                if (divisors > 6) break;
            }
        }

        if (divisors == 6) {
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