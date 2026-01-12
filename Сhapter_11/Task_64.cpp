#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sumPos = 0, sumNeg = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) sumPos += arr[i];
        else if (arr[i] < 0) sumNeg += arr[i];
    }

    if (sumNeg != 0) {
        double result = (double)sumPos / abs(sumNeg);
        cout << "Частное суммы положительных на модуль суммы отрицательных: " << result << endl;
    }
    else {
        cout << "Сумма отрицательных равна нулю, деление невозможно.\n";
    }

    return 0;
}