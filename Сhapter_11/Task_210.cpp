#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int size;
    int arr[100];

    cout << "Введите количество элементов массива: ";
    cin >> size;

    if (size < 3) {
        cout << "Для поиска троек нужно минимум 3 элемента!\n";
        return 0;
    }

    cout << "Введите " << size << " чисел:\n";
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Ищем первую тройку, где средний больше соседей
    bool foundTriple = false;
    int triplePosition = -1;

    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            foundTriple = true;
            triplePosition = i - 1; // Позиция первого элемента тройки
            break;
        }
    }

    if (!foundTriple) {
        cout << "\nВ массиве нет троек, где средний элемент больше соседей.\n";
    }
    else {
        cout << "\nНайдена первая тройка, где средний элемент больше соседей:\n";
        cout << "Позиции: " << triplePosition + 1 << ", "
            << triplePosition + 2 << ", " << triplePosition + 3 << endl;
        cout << "Значения: " << arr[triplePosition] << ", "
            << arr[triplePosition + 1] << ", " << arr[triplePosition + 2] << endl;
        cout << arr[triplePosition] << " < " << arr[triplePosition + 1]
            << " > " << arr[triplePosition + 2] << endl;
    }

    return 0;
}