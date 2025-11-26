#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число n (n >= 3): ";
    cin >> n;

    // Проверка корректности ввода
    if (n < 3) {
        cout << "Ошибка: n должно быть ≥ 3!\n";
        return 1;
    }

    // Инициализация первых двух членов
    long long fib_prev = 1;  // F(1)
    long long fib_curr = 1;  // F(2)

    // а) Найти n-й член
    for (int i = 3; i <= n; i++) {
        long long fib_next = fib_prev + fib_curr;
        fib_prev = fib_curr;
        fib_curr = fib_next;
    }

    cout << "а) " << n << "-й член Фибоначчи: " << fib_curr << endl;

    // б) Получить первые n членов
    cout << "б) Первые " << n << " членов Фибоначчи: ";

    // Сбрасываем для нового расчета
    fib_prev = 1;
    fib_curr = 1;

    // Выводим первые два члена
    cout << "1 1 ";

    // Выводим остальные члены
    for (int i = 3; i <= n; i++) {
        long long fib_next = fib_prev + fib_curr;
        cout << fib_next << " ";
        fib_prev = fib_curr;
        fib_curr = fib_next;
    }
    cout << endl;

    return 0;
}