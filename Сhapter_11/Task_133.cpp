#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int max = arr[0], min = arr[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    if (maxIndex < minIndex)
        cout << "Максимальное число встретилось раньше минимального.\n";
    else if (maxIndex > minIndex)
        cout << "Минимальное число встретилось раньше максимального.\n";
    else
        cout << "Максимальное и минимальное числа совпадают.\n";

    return 0;
}