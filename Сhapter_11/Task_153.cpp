#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    int arr[n];

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Переставляем первые три и последние три элемента
    for (int i = 0; i < 3; i++) {
        int swap = arr[i];
        arr[i] = arr[n - 3 + i];
        arr[n - 3 + i] = swap;
    }

    cout << "После перестановки первых трех и последних трех элементов: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}