#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, count = 0, sum = 0;

    cout << "Введите последовательность неотрицательных чисел (оканчивается отрицательным): ";

    while (true) {
        cin >> num;
        if (num < 0) break;
        sum += num;
        count++;
    }

    if (count > 0)
        cout << "Среднее арифметическое = " << (double)sum / count;
    else
        cout << "Чисел не было введено";

    return 0;
}