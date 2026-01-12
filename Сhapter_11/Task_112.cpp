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

    cout << "Максимальный элемент: arr[" << maxIndex << "] = " << max << endl;
    cout << "Минимальный элемент: arr[" << minIndex << "] = " << min << endl;
    cout << "Максимальный больше минимального на: " << max - min << endl;
    cout << "Индекс максимального: " << maxIndex << endl;
    cout << "Индексы минимального и максимального: " << minIndex << " и " << maxIndex << endl;

    return 0;
}