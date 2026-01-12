#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }

    return true;
}

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Пары чисел-близнецов до 200:" << endl;

    for (int i = 2; i <= 198; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
        }
    }

    return 0;
}