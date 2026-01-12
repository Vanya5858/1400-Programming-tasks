#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE];

    // Ввод массива
    cout << "Введите " << SIZE << " целых чисел (некоторые должны оканчиваться на 0):" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nНомера элементов, оканчивающихся на 0:" << endl;

    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 10 == 0) {
            cout << "Индекс " << i << ": arr[" << i << "] = " << arr[i] << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Элементов, оканчивающихся на 0, не найдено" << endl;
    }

    return 0;
}