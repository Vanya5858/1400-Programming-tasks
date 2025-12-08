#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, sum = 0;

    cout << "Введите последовательность целых чисел (первое число нечётное): ";

    cin >> num;

    while (num % 2 != 0) {
        sum += num;
        cin >> num;
    }

    cout << "Сумма идущих подряд в начале нечётных чисел = " << sum;
    return 0;
}