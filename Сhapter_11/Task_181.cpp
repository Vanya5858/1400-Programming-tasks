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
        // Сохраняем последний элемент
        int last = arr[n - 1];

        // Сдвигаем элементы с k-го по предпоследний вправо
        for (int i = n - 1; i >= k; i--) {
            arr[i] = arr[i - 1];
        }

        // Помещаем последний элемент на k-ю позицию
        arr[k - 1] = last;

        cout << "После перестановки последнего элемента на " << k << "-е место: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    else {
        cout << "Неверный номер элемента!\n";
    }

    return 0;
}