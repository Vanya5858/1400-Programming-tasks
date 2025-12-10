#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n (n >= 2): ";
    cin >> n;

    if (n < 2) {
        cout << "Ошибка: нужно минимум 2 числа";
        return 0;
    }

    int current, prev;
    int countEqualPairs = 0;
    int countZeroPairs = 0;
    int countEvenPairs = 0;
    int countEndsWith5Pairs = 0;

    cout << "Введите " << n << " целых чисел: ";

    cin >> prev;

    for (int i = 1; i < n; i++) {
        cin >> current;

        // а) Пара равных чисел
        if (current == prev)
            countEqualPairs++;

        // б) Пара нулей
        if (prev == 0 && current == 0)
            countZeroPairs++;

        // в) Пара чётных чисел
        if (prev % 2 == 0 && current % 2 == 0)
            countEvenPairs++;

        // г) Пара чисел, оканчивающихся на 5
        if (abs(prev % 10) == 5 && abs(current % 10) == 5)
            countEndsWith5Pairs++;

        // Обновляем предыдущее число
        prev = current;
    }

    // Вывод результатов
    cout << "\nРезультаты:\n";
    cout << "а) Количество пар равных соседних чисел: " << countEqualPairs << endl;
    cout << "б) Количество пар соседних нулей: " << countZeroPairs << endl;
    cout << "в) Количество пар соседних чётных чисел: " << countEvenPairs << endl;
    cout << "г) Количество пар соседних чисел, оканчивающихся на 5: " << countEndsWith5Pairs << endl;

    return 0;
}