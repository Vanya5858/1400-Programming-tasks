#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int k;
    cout << "\nВведите номер элемента k (1-" << n << "): ";
    cin >> k;

    if (k >= 1 && k <= n) {
        // Сохраняем первый элемент
        int first = arr[0];

        // Сдвигаем элементы со 2-го по k-й влево
        for (int i = 0; i < k - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Помещаем первый элемент на k-ю позицию
        arr[k - 1] = first;

        cout << "После перестановки первого элемента на " << k << "-е место: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    else {
        cout << "Неверный номер элемента!\n";
    }

    return 0;
}