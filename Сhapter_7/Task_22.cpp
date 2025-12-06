#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double price1, price2, sum1 = 0, sum2 = 0;

    cout << "Введите стоимость 8 предметов из первого набора: ";
    for (int i = 0; i < 8; i++) {
        cin >> price1;
        sum1 += price1;
    }

    cout << "Введите стоимость 8 предметов из второго набора: ";
    for (int i = 0; i < 8; i++) {
        cin >> price2;
        sum2 += price2;
    }

    if (sum1 < sum2)
        cout << "Первый набор дешевле";
    else if (sum2 < sum1)
        cout << "Второй набор дешевле";
    else
        cout << "Наборы стоят одинаково";

    return 0;
}