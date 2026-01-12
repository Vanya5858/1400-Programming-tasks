#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int size;
    int arr[100];

    cout << "Введите количество элементов массива: ";
    cin >> size;

    if (size == 0) {
        cout << "Массив пуст!\n";
        return 0;
    }

    cout << "Введите " << size << " элементов:\n";
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Подсчет различных элементов
    int uniqueCount = 0;

    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Проверяем, встречался ли этот элемент ранее
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            uniqueCount++;
        }
    }

    // Вывод результатов
    cout << "\nАнализ массива:\n";
    cout << "Всего элементов: " << size << endl;
    cout << "Количество различных элементов: " << uniqueCount << endl;

    if (uniqueCount == size) {
        cout << "Все элементы в массиве различны.\n";
    }
    else if (uniqueCount == 1) {
        cout << "Все элементы в массиве одинаковы.\n";
    }
    else {
        cout << "Повторяющихся элементов: " << size - uniqueCount << endl;
    }

    // Дополнительно: выводим уникальные элементы
    cout << "\nУникальные элементы: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}