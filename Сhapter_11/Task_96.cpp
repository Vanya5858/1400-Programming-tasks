#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    double avgMinMax = (min + max) / 2.0;
    int count = 0;

    cout << "Элементы > среднего минимального и максимального (" << avgMinMax << "): ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > avgMinMax) {
            cout << arr[i] << "(индекс " << i << ") ";
            count++;
        }
    }

    if (count == 0) cout << "нет";
    cout << endl << "Количество таких элементов: " << count << endl;

    return 0;
}