#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 20;
    char arr[SIZE];

    // Заполняем массив символами '#'
    for (int i = 0; i < SIZE; i++) {
        arr[i] = '#';
    }

    // Выводим массив
    cout << "Массив символов:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}