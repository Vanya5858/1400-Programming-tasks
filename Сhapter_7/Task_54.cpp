#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double d, sumGreater20_5 = 0, p;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите " << n << " вещественных чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> d;
        if (d > 20.5)
            sumGreater20_5 += d;
    }

    cout << "Введите значение p: ";
    cin >> p;

    cout << (sumGreater20_5 < p ? "Верно: сумма < p" : "Неверно: сумма >= p");
    return 0;
}