#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double precip, sumEven = 0, sumOdd = 0;

    cout << "Введите количество осадков за каждый день февраля (28 чисел): ";

    for (int day = 1; day <= 28; day++) {
        cin >> precip;
        if (day % 2 == 0)
            sumEven += precip;
        else
            sumOdd += precip;
    }

    cout << (sumEven > sumOdd ? "По чётным числам выпало больше" :
        sumEven < sumOdd ? "По нечётным числам выпало больше" :
        "Выпало одинаково");
    return 0;
}