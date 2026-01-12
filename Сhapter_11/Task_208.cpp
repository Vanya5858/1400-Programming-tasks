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

    // Ищем последнюю пару соседних четных чисел
    bool foundPair = false;
    int lastPairPosition = -1;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] % 2 == 0 && arr[i + 1] % 2 == 0) {
            foundPair = true;
            lastPairPosition = i; // Запоминаем позицию последней найденной пары
        }
    }

    if (!foundPair) {
        cout << "\nВ массиве нет пар соседних четных чисел.\n";
    }
    else {
        cout << "\nНайдена последняя пара соседних четных чисел:\n";
        cout << "Позиции: " << lastPairPosition + 1 << " и " << lastPairPosition + 2 << endl;
        cout << "Значения: " << arr[lastPairPosition] << " и " << arr[lastPairPosition + 1] << endl;

        // Элементы, предшествующие этой паре
        cout << "\nЭлементы, предшествующие этой паре: ";

        if (lastPairPosition > 0) {
            for (int i = 0; i < lastPairPosition; i++) {
                cout << arr[i] << " ";
            }
        }
        else {
            cout << "отсутствуют (пара в начале массива)";
        }
        cout << endl;
    }

    return 0;
}