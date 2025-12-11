#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double precipitation;
    int daysWithout = 0;

    cout << "Введите количество осадков за каждый день марта (31 число): ";

    for (int day = 1; day <= 31; day++) {
        cin >> precipitation;
        if (precipitation == 0)
            daysWithout++;
    }

    cout << (daysWithout == 10 ? "Верно: ровно 10 дней без осадков" :
        "Неверно: не ровно 10 дней без осадков") << endl;

    cout << "Можно ли использовать while? Да, но for удобнее.";
    return 0;
}