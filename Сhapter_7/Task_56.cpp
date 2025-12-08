#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, c, m, p, sumNotExceedM = 0;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите значение m: ";
    cin >> m;
    cout << "Введите " << n << " целых чисел: ";

    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c <= m)
            sumNotExceedM += c;
    }

    cout << "Введите значение p: ";
    cin >> p;

    cout << (sumNotExceedM % p == 0 ? "Верно: сумма кратна p" : "Неверно: сумма не кратна p");
    return 0;
}