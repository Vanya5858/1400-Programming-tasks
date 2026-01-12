#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " различных элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int temp[n];

    // а) Удалить максимальный элемент
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (temp[i] > temp[maxIndex]) {
            maxIndex = i;
        }
    }

    for (int i = maxIndex; i < n - 1; i++) {
        temp[i] = temp[i + 1];
    }
    temp[n - 1] = 0;

    cout << "а) После удаления максимального элемента: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    // б) Удалить минимальный элемент
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (temp[i] < temp[minIndex]) {
            minIndex = i;
        }
    }

    for (int i = minIndex; i < n - 1; i++) {
        temp[i] = temp[i + 1];
    }
    temp[n - 1] = 0;

    cout << "б) После удаления минимального элемента: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    return 0;
}