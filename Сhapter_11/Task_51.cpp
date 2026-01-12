#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    if (sum >= 0)
        cout << "Сумма элементов массива неотрицательна.\n";
    else
        cout << "Сумма элементов массива отрицательна.\n";

    return 0;
}