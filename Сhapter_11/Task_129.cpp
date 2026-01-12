#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    cout << "Номера элементов с максимальным значением (" << max << "): ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) cout << i << " ";
    }
    cout << endl;

    cout << "Номера элементов с минимальным значением (" << min << "): ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == min) cout << i << " ";
    }
    cout << endl;

    return 0;
}