#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    if (n == 0 || n == 1) {
        cout << "Число " << n << " является членом последовательности Фибоначчи" << endl;
        return 0;
    }

    int a = 0, b = 1, c = 1;
    bool isFibonacci = false;

    while (c <= n) {
        if (c == n) {
            isFibonacci = true;
            break;
        }
        a = b;
        b = c;
        c = a + b;
    }

    if (isFibonacci) {
        cout << "Число " << n << " является членом последовательности Фибоначчи" << endl;
    }
    else {
        cout << "Число " << n << " не является членом последовательности Фибоначчи" << endl;
    }

    return 0;
}