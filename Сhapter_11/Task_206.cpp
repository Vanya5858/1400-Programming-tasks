#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int size;
    int arr[100];

    cout << "Введите количество элементов массива: ";
    cin >> size;

    cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Ищем первую пару одинаковых соседних элементов
    bool foundPair = false;
    int pairPosition = -1;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            foundPair = true;
            pairPosition = i;
            break;
        }
    }

    if (!foundPair) {
        cout << "\nВ массиве нет одинаковых соседних элементов.\n";
    }
    else {
        cout << "\nНайдена первая пара одинаковых элементов:\n";
        cout << "Позиции: " << pairPosition + 1 << " и " << pairPosition + 2 << endl;
        cout << "Значение: " << arr[pairPosition] << endl;

        // Элементы после пары
        int startIndex = pairPosition + 2; // Индекс после пары
        cout << "\nЭлементы после этой пары: ";

        if (startIndex < size) {
            for (int i = startIndex; i < size; i++) {
                cout << arr[i] << " ";
            }
        }
        else {
            cout << "отсутствуют (пара в конце массива)";
        }
        cout << endl;
    }

    return 0;
}