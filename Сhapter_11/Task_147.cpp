#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Находим максимальный по модулю
    int maxAbsIndex = 0;
    int maxAbsValue = abs(arr[0]);

    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) > maxAbsValue) {
            maxAbsValue = abs(arr[i]);
            maxAbsIndex = i;
        }
    }

    // Меняем знак
    arr[maxAbsIndex] = -arr[maxAbsIndex];

    cout << "Измененный массив:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}