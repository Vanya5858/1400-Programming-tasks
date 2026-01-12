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

    // а) 20 первых чисел, делящихся на 15 или 17, начиная с 500
    cout << "\nа) 20 чисел, делящихся на 15 или 17 (>=500):" << endl;

    const int SIZE_A = 20;
    int divArr[SIZE_A];

    int count = 0;
    int num = 500;

    while (count < SIZE_A) {
        if (num % 15 == 0 || num % 17 == 0) {
            divArr[count] = num;
            count++;
        }
        num++;
    }

    cout << "Массив: " << endl;
    for (int i = 0; i < SIZE_A; i++) {
        cout << divArr[i] << " ";
        if ((i + 1) % 5 == 0) cout << endl;
    }
    cout << endl;

    // б) 30 первых простых чисел
    cout << "\nб) 30 первых простых чисел:" << endl;

    const int SIZE_B = 30;
    int primeArr[SIZE_B];

    count = 0;
    num = 2;

    while (count < SIZE_B) {
        if (isPrime(num)) {
            primeArr[count] = num;
            count++;
        }
        num++;
    }

    cout << "Массив: " << endl;
    for (int i = 0; i < SIZE_B; i++) {
        cout << primeArr[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;

    return 0;
}