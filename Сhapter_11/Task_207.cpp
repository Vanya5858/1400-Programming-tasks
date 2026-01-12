#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int size;
    int arr[100];

    cout << "Введите количество элементов массива: ";
    cin >> size;

    cout << "Введите " << size << " целых чисел:\n";
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Ищем первую пару соседних нечетных чисел
    bool foundPair = false;
    int pairPosition = -1;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0) {
            foundPair = true;
            pairPosition = i;
            break;
        }
    }

    if (!foundPair) {
        cout << "\nВ массиве нет пар соседних нечетных чисел.\n";
    }
    else {
        cout << "\nНайдена первая пара соседних нечетных чисел:\n";
        cout << "Позиции: " << pairPosition + 1 << " и " << pairPosition + 2 << endl;
        cout << "Значения: " << arr[pairPosition] << " и " << arr[pairPosition + 1] << endl;
    }

    return 0;
}