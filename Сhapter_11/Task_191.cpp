#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE] = { 1, 2, 0, 4, 5, 0, 7, 8, 9, 0 };

    cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // а) все элементы, кроме первого нулевого
    cout << "а) Все элементы, кроме первого нулевого: ";
    bool firstZeroFound = false;
    for (int i = 0; i < SIZE; i++) {

        int shouldPrint = !firstZeroFound || (arr[i] != 0);
        cout << arr[i] * shouldPrint + (shouldPrint ? 0 : 0) << " ";

        if (arr[i] == 0 && !firstZeroFound) {
            firstZeroFound = true;
        }
    }
    cout << endl;

    // б) все элементы, кроме последнего нулевого
    cout << "б) Все элементы, кроме последнего нулевого: ";
    int lastZeroIndex = -1;

    // Находим индекс последнего нуля
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == 0) {
            lastZeroIndex = i;
        }
    }

    // Выводим все элементы кроме последнего нуля
    for (int i = 0; i < SIZE; i++) {
        int shouldPrint = (i != lastZeroIndex);
        cout << arr[i] * shouldPrint + (shouldPrint ? 0 : 0) << " ";
    }
    cout << endl;

    return 0;
}