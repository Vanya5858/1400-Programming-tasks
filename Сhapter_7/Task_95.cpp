#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, prev, current;
    int signChanges = 0;

    cout << "Введите количество чисел в последовательности: ";
    cin >> n;

    if (n < 2) {
        cout << "Нужно минимум 2 числа";
        return 0;
    }

    cout << "Введите " << n << " ненулевых целых чисел: ";

    cin >> prev;

    for (int i = 1; i < n; i++) {
        cin >> current;

        if ((prev > 0 && current < 0) || (prev < 0 && current > 0))
            signChanges++;

        prev = current;
    }

    cout << "Количество смен знака: " << signChanges;
    return 0;
}