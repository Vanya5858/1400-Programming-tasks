#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, sum = 0;

    cout << "Введите 10 чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> a;
        sum += a;
    }

    cout << "Сумма = " << sum;
    return 0;
}