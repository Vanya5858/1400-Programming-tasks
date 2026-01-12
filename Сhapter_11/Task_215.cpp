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

    cout << "Введите " << size << " чисел:\n";
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Находим количество одинаковых элементов в начале
    int firstElement = arr[0];
    int equalCount = 1; // Первый элемент уже учтен

    // Без условного оператора (используем while с проверкой)
    while (equalCount < size && arr[equalCount] == firstElement) {
        equalCount++;
    }

    // Выводим результаты
    cout << "\nКоличество одинаковых элементов в начале: " << equalCount << endl;

    if (equalCount < size) {
        cout << "Элементы после последнего одинакового элемента:\n";
        for (int i = equalCount; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Весь массив заполнен одинаковыми элементами.\n";
        cout << "Элементов после последнего одинакового элемента нет.\n";
    }

    return 0;
}