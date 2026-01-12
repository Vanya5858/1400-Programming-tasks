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

    cout << "Трехзначные простые числа:" << endl;
    int count = 0;

    for (int i = 100; i <= 999; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
            if (count % 10 == 0) cout << endl;
        }
    }

    cout << "\n\nВсего трехзначных простых чисел: " << count << endl;

    return 0;
}