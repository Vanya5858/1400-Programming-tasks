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

    // Сохраняем первый элемент
    int first = arr[0];

    // Сдвигаем все элементы влево
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Помещаем первый элемент в конец
    arr[n - 1] = first;

    cout << "После перестановки первого элемента в конец: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}