#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int x, a, n;
    int sumGreaterN = 0, countGreaterN = 0;

    cout << "Введите количество чисел x: ";
    cin >> x;
    cout << "Введите значение n: ";
    cin >> n;
    cout << "Введите " << x << " целых чисел: ";

    for (int i = 0; i < x; i++) {
        cin >> a;
        if (a > n) {
            sumGreaterN += a;
            countGreaterN++;
        }
    }

    if (countGreaterN > 0) {
        double average = (double)sumGreaterN / countGreaterN;
        cout << "Среднее арифметическое чисел > " << n << ": " << average;
    }
    else {
        cout << "Чисел > " << n << " не найдено (хотя должны быть)";
    }

    return 0;
}