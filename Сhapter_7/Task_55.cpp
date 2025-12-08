#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a, m, q, sumNotGreaterM = 0;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите значение m: ";
    cin >> m;
    cout << "Введите " << n << " целых чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a <= m)
            sumNotGreaterM += a;
    }

    cout << "Введите значение q: ";
    cin >> q;

    cout << (sumNotGreaterM > q ? "Верно: сумма > q" : "Неверно: сумма <= q");
    return 0;
}