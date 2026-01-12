#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE] = { 5, 5, 5, 8, 9, 10, 12, 15, 18, 20 };

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Считаем количество одинаковых элементов в начале
    int count = 1;
    for (int i = 1; i < SIZE; i++) {
        // Без if: увеличиваем счетчик, если элемент равен первому
        count += (arr[i] == arr[0]);
    }

    cout << "Количество одинаковых элементов в начале: " << count << endl;

    // Выводим элементы после последнего одинакового
    cout << "Элементы после последнего одинакового: ";
    for (int i = count; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}