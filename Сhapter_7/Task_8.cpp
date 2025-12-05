#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, sum = 0, count = 0;

    cout << "Введите последовательность целых чисел (оканчивается 0):\n";

    while (true) {
        cin >> num;
        if (num == 0) break;
        sum += num;
        count++;
    }

    cout << "Сумма всех чисел = " << sum << endl;
    cout << "Количество чисел = " << count;

    return 0;
}