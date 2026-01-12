#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE];

    // Ввод массива
    cout << "Введите " << SIZE << " целых чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // а) Все неотрицательные элементы
    cout << "\nа) Неотрицательные элементы:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    // б) Все элементы, не превышающие 100
    cout << "\nб) Элементы <= 100:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] <= 100) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}