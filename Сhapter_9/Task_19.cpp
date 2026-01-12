#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Число\tДелителей" << endl;
    cout << "----------------" << endl;

    for (int n = 120; n <= 140; n++) {
        int divisors = 0;

        for (int d = 1; d <= n; d++) {
            if (n % d == 0) {
                divisors++;
            }
        }

        cout << n << "\t" << divisors << endl;
    }

    return 0;
}