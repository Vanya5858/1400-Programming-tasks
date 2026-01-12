#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE];

    // Заполняем массив
    cout << "Введите " << SIZE << " чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // Выводим в прямом порядке
    cout << "\nВ прямом порядке:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Выводим в обратном порядке
    cout << "В обратном порядке:" << endl;
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}