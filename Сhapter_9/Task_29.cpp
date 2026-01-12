#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Числа, сумма делителей которых кратна 10:" << endl;
    cout << "----------------------------------------" << endl;

    int count = 0;

    for (int n = 300; n <= 600; n++) {
        int sum = 0;

        for (int d = 1; d <= n; d++) {
            if (n % d == 0) {
                sum += d;
            }
        }

        if (sum % 10 == 0) {
            cout << n << " (сумма: " << sum << ") ";
            count++;

            if (count % 5 == 0) {
                cout << endl;
            }
        }
    }

    cout << "\n\nВсего найдено: " << count << " чисел" << endl;

    return 0;
}