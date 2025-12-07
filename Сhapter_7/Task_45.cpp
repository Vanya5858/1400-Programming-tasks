#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double c, sum = 0;

    cout << "Введите 15 вещественных чисел: ";
    for (int i = 1; i <= 15; i++) {
        cin >> c;
        if (i % 2 == 1)
            sum -= c;
    }

    cout << "-c1 - c3 - c5 - ... = " << sum;
    return 0;
}