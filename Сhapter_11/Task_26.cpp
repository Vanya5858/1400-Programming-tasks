#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE];

    // Ввод массива
    cout << "Введите " << SIZE << " целых чисел (положительные и отрицательные):" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nСначала неотрицательные, затем отрицательные:" << endl;

    // Выводим неотрицательные
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= 0) {
            cout << arr[i] << " ";
        }
    }

    // Выводим отрицательные
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}