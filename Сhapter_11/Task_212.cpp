#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int size;
    int arr[100];

    cout << "Введите количество элементов массива: ";
    cin >> size;

    if (size < 2) {
        cout << "Для проверки упорядоченности нужно минимум 2 элемента!\n";
        return 0;
    }

    cout << "Введите " << size << " чисел:\n";
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Проверяем упорядоченность по возрастанию
    bool isSorted = true;
    int violationIndex = -1;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            violationIndex = i + 1; // Индекс элемента, нарушающего порядок
            break;
        }
    }

    if (isSorted) {
        cout << "\nМассив упорядочен по возрастанию.\n";
    }
    else {
        cout << "\nМассив НЕ упорядочен по возрастанию.\n";
        cout << "Первый элемент, нарушающий порядок: позиция "
            << violationIndex + 1 << endl;
        cout << "Значение: " << arr[violationIndex]
            << " (должно быть >= " << arr[violationIndex - 1] << ")\n";
    }

    return 0;
}