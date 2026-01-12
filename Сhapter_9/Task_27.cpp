#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Число\tСумма делителей" << endl;
    cout << "---------------------" << endl;

    for (int n = 50; n <= 70; n++) {
        int sum = 0;

        for (int d = 1; d <= n; d++) {
            if (n % d == 0) {
                sum += d;
            }
        }

        cout << n << "\t" << sum << endl;
    }

    return 0;
}