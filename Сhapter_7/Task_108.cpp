#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m, b, n;
    int sumMultipleN = 0, countMultipleN = 0;

    cout << "Введите количество чисел m: ";
    cin >> m;
    cout << "Введите значение n: ";
    cin >> n;
    cout << "Введите " << m << " целых чисел: ";

    for (int i = 0; i < m; i++) {
        cin >> b;
        if (b % n == 0) {
            sumMultipleN += b;
            countMultipleN++;
        }
    }

    if (countMultipleN > 0) {
        double average = (double)sumMultipleN / countMultipleN;
        cout << "Среднее арифметическое чисел, кратных " << n << ": " << average;
    }
    else {
        cout << "Чисел, кратных " << n << ", не найдено (хотя должны быть)";
    }

    return 0;
}