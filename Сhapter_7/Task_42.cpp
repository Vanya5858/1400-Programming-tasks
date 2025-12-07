#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int d, sum = 0;

    cout << "Введите 10 целых чисел: ";
    for (int i = 0; i < 10; i++) {
        cin >> d;
        if (d % 2 == 0)
            sum += d;
    }

    cout << "Сумма чётных чисел = " << sum;
    return 0;
}