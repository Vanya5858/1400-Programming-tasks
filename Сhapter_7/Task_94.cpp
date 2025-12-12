#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, prev, current, next;
    int countLocalMax = 0;

    cout << "Введите количество чисел в последовательности: ";
    cin >> n;

    if (n < 3) {
        cout << "Нужно минимум 3 числа";
        return 0;
    }

    cout << "Введите " << n << " чисел: ";

    cin >> prev >> current;

    for (int i = 2; i < n; i++) {
        cin >> next;

        if (current > prev && current > next)
            countLocalMax++;

        prev = current;
        current = next;
    }

    cout << "Количество строгих локальных максимумов: " << countLocalMax;
    return 0;
}