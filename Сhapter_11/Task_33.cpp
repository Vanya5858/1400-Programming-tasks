#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    double arr[SIZE];

    // Ввод массива
    cout << "Введите " << SIZE << " вещественных чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // Сохраняем исходный массив
    double original[SIZE];
    for (int i = 0; i < SIZE; i++) {
        original[i] = arr[i];
    }

    // а) Каждый элемент, больший 10, заменяем его квадратным корнем
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > 10) {
            arr[i] = sqrt(arr[i]);
        }
    }

    cout << "\nа) Элементы >10 заменены квадратными корнями:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (original[i] > 10) {
            cout << original[i] << " -> " << arr[i] << endl;
        }
        else {
            cout << original[i] << " (не изменился)" << endl;
        }
    }

    // Восстанавливаем массив
    for (int i = 0; i < SIZE; i++) {
        arr[i] = original[i];
    }

    // б) Все элементы с четными номерами заменяем их абсолютной величиной
    for (int i = 0; i < SIZE; i += 2) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }

    cout << "\nб) Элементы с четными индексами заменены абсолютными величинами:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}