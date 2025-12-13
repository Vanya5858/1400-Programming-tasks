#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double c, sumGreater20 = 0;
    int countGreater20 = 0;

    cout << "Введите 16 вещественных чисел: ";

    for (int i = 0; i < 16; i++) {
        cin >> c;
        if (c > 20) {
            sumGreater20 += c;
            countGreater20++;
        }
    }

    if (countGreater20 > 0) {
        double average = sumGreater20 / countGreater20;
        cout << "Среднее арифметическое чисел > 20: " << average;
    }
    else {
        cout << "Чисел > 20 не найдено (хотя должны быть)";
    }

    return 0;
}