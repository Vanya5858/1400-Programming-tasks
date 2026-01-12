#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 15;
    int arr[SIZE];

    // Ввод массива
    cout << "Введите " << SIZE << " натуральных чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // а) Все двузначные числа
    cout << "\nа) Двузначные числа (10-99):" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    // б) Все трехзначные числа
    cout << "\nб) Трехзначные числа (100-999):" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= 100 && arr[i] <= 999) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}