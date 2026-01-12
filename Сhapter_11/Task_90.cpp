#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 15;
    double arr[n];

    cout << "Введите " << n << " вещественных чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    double sumPos = 0, sumNeg = 0;
    int countPos = 0, countNeg = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sumPos += arr[i];
            countPos++;
        }
        else if (arr[i] < 0) {
            sumNeg += arr[i];
            countNeg++;
        }
    }

    if (countPos > 0)
        cout << "Среднее положительных: " << sumPos / countPos << endl;
    else
        cout << "Нет положительных чисел.\n";

    if (countNeg > 0)
        cout << "Среднее отрицательных: " << sumNeg / countNeg << endl;
    else
        cout << "Нет отрицательных чисел.\n";

    return 0;
}