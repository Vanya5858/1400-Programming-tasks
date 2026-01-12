#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int houses = 20;
    int residents[houses];

    cout << "Введите число жителей в каждом из " << houses << " домов:\n";
    for (int i = 0; i < houses; i++) cin >> residents[i];

    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i < houses; i++) {
        if ((i + 1) % 2 == 0) sumEven += residents[i]; // чётные номера
        else sumOdd += residents[i];                    // нечётные номера
    }

    if (sumOdd > sumEven)
        cout << "Больше жителей на стороне с нечётными домами.\n";
    else if (sumOdd < sumEven)
        cout << "Больше жителей на стороне с чётными домами.\n";
    else
        cout << "Количество жителей на обеих сторонах одинаково.\n";

    return 0;
}