#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    double arr[SIZE] = { 3.5, 2.1, -1.2, 4.3, -0.5, 6.7, -2.8, 1.9, 0.3, -1.1 };

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Проверяем наличие отрицательных чисел
    bool hasNegative = false;
    for (int i = 0; i < SIZE; i++) {
        hasNegative = hasNegative || (arr[i] < 0);
    }

    if (hasNegative) {
        // а) Первый отрицательный и следующие за ним
        int firstNegativeIndex = -1;
        for (int i = 0; i < SIZE; i++) {
            if (arr[i] < 0) {
                firstNegativeIndex = i;
                break;
            }
        }

        cout << "а) Первый отрицательный элемент: arr["
            << firstNegativeIndex << "]=" << arr[firstNegativeIndex] << endl;
        cout << "   Элементы после него: ";
        for (int i = firstNegativeIndex + 1; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // б) Последний отрицательный и элементы слева
        int lastNegativeIndex = -1;
        for (int i = 0; i < SIZE; i++) {
            if (arr[i] < 0) {
                lastNegativeIndex = i;
            }
        }

        cout << "б) Последний отрицательный элемент: arr["
            << lastNegativeIndex << "]=" << arr[lastNegativeIndex] << endl;
        cout << "   Элементы перед ним: ";
        for (int i = 0; i < lastNegativeIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "В массиве нет отрицательных чисел" << endl;
    }

    return 0;
}