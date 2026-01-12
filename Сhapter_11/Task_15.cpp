#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 8;
    int arr[SIZE];

    // а) Убывающая последовательность
    cout << "\nа) Убывающая последовательность:" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = SIZE - i;
    }

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // б) Возрастающая последовательность
    cout << "\nб) Возрастающая последовательность:" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i * 2 + 1;
    }

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Другой вариант возрастающей последовательности
    cout << "\nДругой вариант возрастающей:" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (i + 1) * 10;
    }

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}