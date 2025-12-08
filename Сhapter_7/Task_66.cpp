#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double num;
    int countNegative = 0;
    int n;

    cout << "Введите количество чисел n: ";
    cin >> n;
    cout << "Введите последовательность вещественных чисел (начинается с отрицательного): ";

    cin >> num;

    while (num < 0 && countNegative < n) {
        countNegative++;
        if (countNegative < n)
            cin >> num;
    }

    cout << "Количество отрицательных чисел в начале: " << countNegative;
    return 0;
}