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

    // а) Все четные элементы
    cout << "\nа) Четные элементы:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    // б) Все элементы, оканчивающиеся нулем
    cout << "\nб) Элементы, оканчивающиеся на 0:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 10 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}