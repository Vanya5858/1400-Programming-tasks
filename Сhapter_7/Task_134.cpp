#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, prev, countDistinct = 0;
    bool first = true;

    cout << "Введите последовательность вещественных чисел, оканчивающуюся 0: ";
    while (true) {
        cin >> num;
        if (num == 0) break;

        if (first) {
            countDistinct = 1;
            prev = num;
            first = false;
        }
        else {
            if (num != prev) {
                countDistinct++;
                prev = num;
            }
        }
    }

    cout << "Количество различных чисел: " << countDistinct << endl;
    return 0;
}