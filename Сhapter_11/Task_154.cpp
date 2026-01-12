#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 15;
    int arr[n];

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int temp[n];

    // а) Элементы между вторым и десятым (с 3-го по 9-й)
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    for (int i = 2, j = 8; i < j; i++, j--) {
        int swap = temp[i];
        temp[i] = temp[j];
        temp[j] = swap;
    }
    cout << "а) После обратного порядка элементов с 3-го по 9-й: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    // б) Элементы между k-м и s-м
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    int k, s;
    cout << "\nВведите k и s (k < s, 1-" << n << "): ";
    cin >> k >> s;
    if (k >= 1 && s <= n && k < s) {
        for (int i = k, j = s - 2; i < j; i++, j--) {
            int swap = temp[i];
            temp[i] = temp[j];
            temp[j] = swap;
        }
        cout << "б) После обратного порядка элементов с " << k + 1 << "-го по " << s - 1 << "-й: ";
        for (int i = 0; i < n; i++) cout << temp[i] << " ";
        cout << endl;
    }

    // в) Элементы между максимальным и минимальным
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (temp[i] > temp[maxIndex]) maxIndex = i;
        if (temp[i] < temp[minIndex]) minIndex = i;
    }

    int start = (maxIndex < minIndex) ? maxIndex : minIndex;
    int end = (maxIndex > minIndex) ? maxIndex : minIndex;

    for (int i = start, j = end; i < j; i++, j--) {
        int swap = temp[i];
        temp[i] = temp[j];
        temp[j] = swap;
    }

    cout << "в) После обратного порядка элементов между min и max: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    return 0;
}