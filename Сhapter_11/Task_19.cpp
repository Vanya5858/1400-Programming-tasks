#include <iostream>
using namespace std;

// Функция проверки, является ли число простым
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int primes[SIZE];

    int count = 0;
    int num = 100;

    // Ищем 10 простых чисел, начиная с 100
    while (count < SIZE) {
        if (isPrime(num)) {
            primes[count] = num;
            count++;
        }
        num++;
    }

    // Выводим результат
    cout << "Первые 10 простых чисел, начиная с 100:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << ") " << primes[i] << endl;
    }

    return 0;
}