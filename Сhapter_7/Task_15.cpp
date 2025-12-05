#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, sum = 0;

    cout << "Введите 10 вещественных чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> a;
        sum += a;
    }

    cout << (sum > 100.78 ? "Сумма превышает 100.78" : "Сумма не превышает 100.78");
    return 0;
}