#include <iostream>
using namespace std;

int main() {
    double sum = 0;
    double term = 1.0;  // первый член последовательности: 1/3^0 = 1

    for (int i = 0; i <= 8; i++) {
        sum += term;
        term /= 3;      // каждый следующий член в 3 раза меньше
    }

    cout << "1 + 1/3 + 1/3^2 + ... + 1/3^8 = " << sum << endl;

    return 0;
}