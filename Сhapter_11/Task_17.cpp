#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int fib[SIZE];

    // Первые два числа Фибоначчи
    fib[0] = 1;
    fib[1] = 1;

    // Остальные числа
    for (int i = 2; i < SIZE; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Выводим результат
    cout << "Первые " << SIZE << " чисел Фибоначчи:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "F" << i + 1 << " = " << fib[i] << endl;
    }

    cout << "\nВ одну строку: ";
    for (int i = 0; i < SIZE; i++) {
        cout << fib[i] << " ";
    }
    cout << endl;

    return 0;
}