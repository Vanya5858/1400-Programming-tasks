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

    // Находим первый отрицательный элемент
    int firstNegativeIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            firstNegativeIndex = i;
            break;
        }
    }

    // Находим последний положительный элемент
    int lastPositiveIndex = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > 0) {
            lastPositiveIndex = i;
            break;
        }
    }

    // Меняем местами, если оба найдены
    if (firstNegativeIndex != -1 && lastPositiveIndex != -1) {
        int swap = arr[firstNegativeIndex];
        arr[firstNegativeIndex] = arr[lastPositiveIndex];
        arr[lastPositiveIndex] = swap;

        cout << "После обмена первого отрицательного и последнего положительного: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    else {
        cout << "Не удалось выполнить обмен:\n";
        if (firstNegativeIndex == -1) cout << "  - Нет отрицательных элементов\n";
        if (lastPositiveIndex == -1) cout << "  - Нет положительных элементов\n";
    }

    return 0;
}