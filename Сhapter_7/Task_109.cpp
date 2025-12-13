#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num;
    int sumEven = 0, countEven = 0;
    int sumOdd = 0, countOdd = 0;

    cout << "Введите 12 целых чисел: ";

    for (int i = 0; i < 12; i++) {
        cin >> num;
        if (num % 2 == 0) {
            sumEven += num;
            countEven++;
        }
        else {
            sumOdd += num;
            countOdd++;
        }
    }

    cout << "Чётные числа: ";
    if (countEven > 0) {
        cout << "среднее = " << (double)sumEven / countEven;
    }
    else {
        cout << "нет чётных чисел";
    }

    cout << "\nНечётные числа: ";
    if (countOdd > 0) {
        cout << "среднее = " << (double)sumOdd / countOdd;
    }
    else {
        cout << "нет нечётных чисел";
    }

    return 0;
}