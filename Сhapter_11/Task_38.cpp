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

    // Сохраняем исходный массив
    int original[SIZE];
    for (int i = 0; i < SIZE; i++) {
        original[i] = arr[i];
    }

    // а) Все элементы, оканчивающиеся цифрой 4, уменьшить вдвое
    for (int i = 0; i < SIZE; i++) {
        if (abs(arr[i]) % 10 == 4) {
            arr[i] /= 2;
        }
    }

    cout << "\nа) Элементы, оканчивающиеся на 4, уменьшены вдвое:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (abs(original[i]) % 10 == 4) {
            cout << original[i] << " -> " << arr[i] << endl;
        }
    }

    // Восстанавливаем массив
    for (int i = 0; i < SIZE; i++) {
        arr[i] = original[i];
    }

    // б) Все четные элементы заменить на их квадраты, а нечетные удвоить
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] * arr[i];
        }
        else {
            arr[i] = arr[i] * 2;
        }
    }

    cout << "\nб) Четные возведены в квадрат, нечетные удвоены:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (original[i] % 2 == 0) {
            cout << original[i] << " -> " << arr[i] << " (" << original[i] << "^2)" << endl;
        }
        else {
            cout << original[i] << " -> " << arr[i] << " (2*" << original[i] << ")" << endl;
        }
    }

    return 0;
}