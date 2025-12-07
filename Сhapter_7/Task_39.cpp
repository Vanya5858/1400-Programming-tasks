#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    int* a = new int[n];

    cout << "Введите " << n << " чисел: ";

    double sumAbs = 0, productAbs = 1, altSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int absVal = abs(a[i]);

        // а) Сумма модулей
        sumAbs += absVal;

        // б) Произведение модулей (первые n/2 элементов, как в условии)
        if (i < n / 2) {
            productAbs *= absVal;
        }

        // г) Знакопеременная сумма (без условного оператора)
        if (i % 2 == 0) { // нечётные позиции (1, 3, 5...)
            altSum += a[i];
        }
        else { // чётные позиции (2, 4, 6...)
            altSum -= a[i];
        }
    }

    // Вывод результатов
    cout << "\nа) Сумма модулей = " << sumAbs << endl;
    cout << "б) Произведение модулей первых " << n / 2 << " элементов = " << productAbs << endl;

    // в) Суммы соседних элементов (используем массив)
    cout << "в) Суммы соседних элементов:" << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] + a[i + 1] << " ";
    }
    cout << endl;

    // г) Знакопеременная сумма
    cout << "г) a1 - a2 + a3 - ... = " << altSum << endl;

    // Освобождаем память
    delete[] a;

    return 0;
}