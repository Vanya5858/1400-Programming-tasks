#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 20;
    int arr[SIZE];

    // Заполняем массив числами от 20 до 1
    for (int i = 0; i < SIZE; i++) {
        arr[i] = SIZE - i;
    }

    // Выводим массив
    cout << "Массив (20 элементов):" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}