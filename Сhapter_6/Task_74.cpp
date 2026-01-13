#include <iostream>
using namespace std;

bool isPowerOf(int n, int base) {
    if (n <= 0) return false;
    if (n == 1) return true;

    while (n % base == 0) {
        n /= base;
    }

    return n == 1;
}

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    cout << "а) Является ли число " << n << " степенью числа 3: ";
    if (isPowerOf(n, 3)) {
        cout << "Да" << endl;
    }
    else {
        cout << "Нет" << endl;
    }

    cout << "б) Является ли число " << n << " степенью числа 5: ";
    if (isPowerOf(n, 5)) {
        cout << "Да" << endl;
    }
    else {
        cout << "Нет" << endl;
    }

    return 0;
}