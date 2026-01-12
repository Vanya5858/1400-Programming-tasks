#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int arr[8];

    // Заполняем массив значениями из условия
    arr[0] = 37;
    arr[1] = 0;
    arr[2] = 50;
    arr[3] = 46;
    arr[4] = 34;
    arr[5] = 46;
    arr[6] = 0;
    arr[7] = 13;

    // Выводим массив
    cout << "Массив из 8 элементов:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}