#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double precip, totalEven = 0;
    int daysInMonth;

    cout << "Введите количество дней в месяце: ";
    cin >> daysInMonth;
    cout << "Введите количество осадков за каждый день: ";

    for (int day = 1; day <= daysInMonth; day++) {
        cin >> precip;
        if (day % 2 == 0)
            totalEven += precip;
    }

    cout << "Общее количество осадков в чётные числа = " << totalEven;
    return 0;
}