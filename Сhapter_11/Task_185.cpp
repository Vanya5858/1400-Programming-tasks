#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 28;
    int m[SIZE];

    // Заполняем массив значениями
    cout << "Исходный массив из " << SIZE << " элементов:" << endl;
    for (int i = 0; i < SIZE; i++) {
        m[i] = i + 1;
        cout << m[i] << " ";
    }
    cout << endl << endl;

    // Запрашиваем количество элементов для переноса
    int k;
    cout << "Введите количество первых элементов для переноса (k < " << SIZE << "): ";
    cin >> k;

    if (k <= 0 || k >= SIZE) {
        cout << "Некорректное значение k. Должно быть: 0 < k < " << SIZE << endl;
        return 1;
    }

    for (int i = 0; i < k; i++) {

        int first = m[0];
        for (int j = 0; j < SIZE - 1; j++) {
            m[j] = m[j + 1];
        }

        m[SIZE - 1] = first;
    }

    // Выводим результат
    cout << endl << "Массив после переноса первых " << k << " элементов в конец:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << m[i] << " ";
    }
    cout << endl;

    return 0;
}