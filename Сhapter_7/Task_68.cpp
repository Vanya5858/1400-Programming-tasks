#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, num, firstNum, countEqual = 1;

    cout << "Введите количество чисел n: ";
    cin >> n;
    if (n <= 0) return 0;

    cout << "Введите " << n << " целых чисел: ";
    cin >> firstNum;

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num == firstNum)
            countEqual++;
        else
            break;
    }

    cout << "Количество равных первых элементов: " << countEqual;
    return 0;
}