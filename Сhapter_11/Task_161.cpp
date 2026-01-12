#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " различных элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Находим максимальный и минимальный элементы
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) maxIndex = i;
        if (arr[i] < arr[minIndex]) minIndex = i;
    }

    cout << "Максимальный элемент: arr[" << maxIndex + 1 << "] = " << arr[maxIndex] << endl;
    cout << "Минимальный элемент: arr[" << minIndex + 1 << "] = " << arr[minIndex] << endl;

    // Создаем новый массив без максимального и минимального элементов
    const int newSize = n - 2;  // Исправлено: объявляем как const
    int newArr[newSize];
    int index = 0;

    // Просто копируем все элементы, кроме максимального и минимального
    for (int i = 0; i < n; i++) {
        if (i != maxIndex && i != minIndex) {
            newArr[index] = arr[i];
            index++;
        }
    }

    cout << "\nПосле удаления максимального и минимального элементов: ";
    for (int i = 0; i < newSize; i++) cout << newArr[i] << " ";
    cout << endl;

    return 0;
}