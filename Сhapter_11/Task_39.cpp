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

    // а) Все элементы, кратные числу 10, заменить нулем
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] != 0 && arr[i] % 10 == 0) {
            arr[i] = 0;
        }
    }

    cout << "\nа) Элементы, кратные 10, заменены нулями:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (original[i] != 0 && original[i] % 10 == 0) {
            cout << original[i] << " -> " << arr[i] << endl;
        }
    }

    // Восстанавливаем массив
    for (int i = 0; i < SIZE; i++) {
        arr[i] = original[i];
    }

    // б) Все нечетные элементы удвоить, а четные уменьшить вдвое
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] /= 2;
        }
        else {
            arr[i] *= 2;
        }
    }

    cout << "\nб) Нечетные удвоены, четные уменьшены вдвое:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (original[i] % 2 == 0) {
            cout << original[i] << " -> " << arr[i] << " (" << original[i] << "/2)" << endl;
        }
        else {
            cout << original[i] << " -> " << arr[i] << " (2*" << original[i] << ")" << endl;
        }
    }

    return 0;
}