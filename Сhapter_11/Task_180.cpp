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

    // Сохраняем последний элемент
    int last = arr[n - 1];

    // Сдвигаем все элементы вправо
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Помещаем последний элемент в начало
    arr[0] = last;

    cout << "После перестановки последнего элемента в начало: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}