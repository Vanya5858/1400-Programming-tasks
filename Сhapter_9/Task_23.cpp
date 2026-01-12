#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a, b, k;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите k: ";
    cin >> k;

    cout << "\nЧисла с " << k << " делителями:" << endl;
    cout << "-----------------------" << endl;

    int count = 0;

    for (int n = a; n <= b; n++) {
        int divisors = 0;

        for (int d = 1; d <= n; d++) {
            if (n % d == 0) {
                divisors++;
                if (divisors > k) break;
            }
        }

        if (divisors == k) {
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