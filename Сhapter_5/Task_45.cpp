#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // Инициализация первых двух членов
    long long fib_prev = 1;  // F(1)
    long long fib_curr = 1;  // F(2)

    cout << "Члены последовательности Фибоначчи с 3-го по 10-й:\n";

    // Вычисляем и выводим члены с 3-го по 10-й
    for (int i = 3; i <= 10; i++) {
        long long fib_next = fib_prev + fib_curr;
        cout << i << "-й член: " << fib_next << endl;
        fib_prev = fib_curr;
        fib_curr = fib_next;
    }

    return 0;
}