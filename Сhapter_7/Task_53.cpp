#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    int m;
    double sumLess25_5 = 0;
    int sumNotExceed20 = 0;

    cout << "Введите " << n << " целых чисел: ";
    for (int i = 0; i < n; i++) {
        cin >> m;

        // Для пункта а: сумма чисел < 25.5
        if (m < 25.5)
            sumLess25_5 += m;

        // Для пункта б: сумма чисел ≤ 20
        if (m <= 20)
            sumNotExceed20 += m;
    }

    cout << "\nа) Сумма чисел меньше 25.5 = " << sumLess25_5;
    cout << " - " << (sumLess25_5 <= 50 ? "Верно: сумма ≤ 50" : "Неверно: сумма > 50") << endl;

    cout << "б) Сумма чисел не превышающих 20 = " << sumNotExceed20;
    cout << " - " << (sumNotExceed20 % 3 == 0 ? "Верно: сумма кратна 3" : "Неверно: сумма не кратна 3") << endl;

    return 0;
}