#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Числа, сумма делителей которых равна 50:" << endl;
    cout << "--------------------------------------" << endl;

    int count = 0;

    for (int n = 100; n <= 300; n++) {
        int sum = 0;

        for (int d = 1; d <= n; d++) {
            if (n % d == 0) {
                sum += d;
            }
        }

        if (sum == 50) {
            cout << n << " ";
            count++;

            if (count % 10 == 0) {
                cout << endl;
            }
        }
    }

    if (count == 0) {
        cout << "Таких чисел нет" << endl;
    }
    else {
        cout << "\n\nВсего найдено: " << count << " чисел" << endl;
    }

    return 0;
}