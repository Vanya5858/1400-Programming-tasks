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

    // Ищем последнюю тройку, где средний больше соседей
    bool foundTriple = false;
    int lastTriplePosition = -1;

    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            foundTriple = true;
            lastTriplePosition = i - 1; // Запоминаем позицию последней найденной тройки
        }
    }

    if (!foundTriple) {
        cout << "\nВ массиве нет троек, где средний элемент больше соседей.\n";
    }
    else {
        cout << "\nНайдена последняя тройка, где средний элемент больше соседей:\n";
        cout << "Позиции: " << lastTriplePosition + 1 << ", "
            << lastTriplePosition + 2 << ", " << lastTriplePosition + 3 << endl;
        cout << "Значения: " << arr[lastTriplePosition] << ", "
            << arr[lastTriplePosition + 1] << ", " << arr[lastTriplePosition + 2] << endl;

        // Элементы, предшествующие этой тройке
        cout << "\nЭлементы, предшествующие этой тройке: ";

        if (lastTriplePosition > 0) {
            for (int i = 0; i < lastTriplePosition; i++) {
                cout << arr[i] << " ";
            }
            cout << "(всего " << lastTriplePosition << " элементов)";
        }
        else {
            cout << "отсутствуют (тройка в начале массива)";
        }
        cout << endl;
    }

    return 0;
}