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

    // а) Каждый отрицательный элемент заменяем его абсолютной величиной
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }

    cout << "\nа) После замены отрицательных на абсолютные величины:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << original[i] << " -> " << arr[i] << endl;
    }

    // Восстанавливаем массив
    for (int i = 0; i < SIZE; i++) {
        arr[i] = original[i];
    }

    // б) Все элементы с нечетными номерами заменяем их квадратным корнем
    for (int i = 1; i < SIZE; i += 2) {
        if (arr[i] >= 0) {
            arr[i] = sqrt(arr[i]);
        }
    }

    cout << "\nб) Элементы с нечетными индексами заменены квадратными корнями:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}