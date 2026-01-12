#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int a = 8; // число между первым и последним, но не равное элементам

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nЧисло a = " << a << endl;

    // а) Вывести все элементы массива, меньшие a
    cout << "а) Элементы, меньшие " << a << ": ";
    for (int i = 0; i < SIZE; i++) {
        // Используем знаковую арифметику вместо if
        int isLess = (arr[i] < a);
        cout << arr[i] * isLess + (isLess ? 0 : 0) << " ";
    }
    cout << endl;

    // б) Найти два элемента, между которыми находится a
    cout << "б) Элементы, между которыми находится " << a << ": ";
    for (int i = 0; i < SIZE - 1; i++) {
        int isBetween = (arr[i] < a && a < arr[i + 1]);
        if (isBetween) {
            cout << "arr[" << i << "]=" << arr[i]
                << " и arr[" << i + 1 << "]=" << arr[i + 1] << endl;
        }
    }

    // в) Найти элемент, ближайший к a
    int closestIndex = 0;
    int minDiff = abs(arr[0] - a);

    for (int i = 1; i < SIZE; i++) {
        int diff = abs(arr[i] - a);
        int isCloser = (diff < minDiff);

        // Обновляем без if
        closestIndex = closestIndex * !isCloser + i * isCloser;
        minDiff = minDiff * !isCloser + diff * isCloser;
    }

    cout << "в) Ближайший к " << a << " элемент: arr["
        << closestIndex << "]=" << arr[closestIndex] << endl;

    return 0;
}