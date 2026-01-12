#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Трехзначные простые числа:" << endl;
    cout << "------------------------" << endl;

    int count = 0;

    for (int n = 100; n <= 999; n++) {
        bool isPrime = true;

        if (n < 2) isPrime = false;
        else {
            for (int d = 2; d * d <= n; d++) {
                if (n % d == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << n << " ";
            count++;

            if (count % 10 == 0) {
                cout << endl;
            }
        }
    }

    cout << "\n\nВсего найдено: " << count << " простых чисел" << endl;

    return 0;
}