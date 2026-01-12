#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 12;
    int arr[SIZE];

    // Заполняем массив числами от 1 до 12
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }

    // Выводим массив
    cout << "Массив:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // Выводим в одну строку как на рисунке
    cout << "\nВ виде строки: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}