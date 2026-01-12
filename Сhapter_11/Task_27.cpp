#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE];

    // Ввод массива
    cout << "Введите " << SIZE << " целых чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nСначала четные, затем нечетные:" << endl;

    // Выводим четные
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    // Выводим нечетные
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}