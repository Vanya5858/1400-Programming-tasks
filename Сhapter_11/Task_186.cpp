#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 12;
    int arr[n];

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int newArr[n];

    for (int i = 0; i < n / 2; i++) {
        newArr[2 * i] = arr[i];    
        newArr[2 * i + 1] = arr[n - 1 - i];   
    }

    if (n % 2 == 1) {
        newArr[n - 1] = arr[n / 2];
    }

    cout << "После перестановки: ";
    for (int i = 0; i < n; i++) cout << newArr[i] << " ";
    cout << endl;

    // Покажем схему перестановки
    cout << "\nСхема перестановки:\n";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << "arr[" << i / 2 + 1 << "] ";
        }
        else {
            cout << "arr[" << n - i / 2 << "] ";
        }
    }
    cout << endl;

    return 0;
}