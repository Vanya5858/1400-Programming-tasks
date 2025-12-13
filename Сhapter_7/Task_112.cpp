#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double b;
    double sumGreater10 = 0;
    int countGreater10 = 0;

    cout << "Введите 15 вещественных чисел: ";

    for (int i = 0; i < 15; i++) {
        cin >> b;
        if (b > 10) {
            sumGreater10 += b;
            countGreater10++;
        }
    }

    if (countGreater10 > 0) {
        cout << "Среднее арифметическое чисел > 10: "
            << sumGreater10 / countGreater10;
    }
    else {
        cout << "Чисел > 10 не найдено";
    }

    return 0;
}