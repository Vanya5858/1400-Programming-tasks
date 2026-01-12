#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int n = 10;

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nИскомое значение n = " << n << endl;

    // а) Элементы перед первым n
    cout << "а) Элементы перед первым " << n << ": ";
    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        // Без if: выводим пока не нашли n
        int shouldPrint = !found;
        cout << arr[i] * shouldPrint + (shouldPrint ? 0 : 0) << " ";

        // Отмечаем, если нашли n
        found = found || (arr[i] == n);
    }
    cout << endl;

    // б) Элементы после последнего, оканчивающегося на 7
    cout << "б) Элементы после последнего, оканчивающегося на 7: ";
    int lastIndex = -1;

    // Находим последний элемент, оканчивающийся на 7
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 10 == 7) {
            lastIndex = i;
        }
    }

    // Выводим элементы после него
    for (int i = lastIndex + 1; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}