#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, sum = 0;

    cout << "Введите 12 вещественных чисел: ";
    for (int i = 0; i < 12; i++) {
        cin >> a;
        if (a > 10.75)
            sum += a;
    }

    cout << "Сумма чисел больше 10.75 = " << sum;
    return 0;
}