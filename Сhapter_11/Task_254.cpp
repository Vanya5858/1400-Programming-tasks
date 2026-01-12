#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a[100], b[100];
    int size;

    cout << "Введите размер массива (до 100): ";
    cin >> size;

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    // Заполняем массив b: сначала отрицательные, потом остальные
    int neg_index = 0;     // индекс для отрицательных элементов
    int other_index = 0;   // индекс для остальных элементов

    // Сначала считаем сколько отрицательных элементов
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            neg_index++;
        }
    }

    other_index = neg_index;  // остальные элементы после отрицательных

    // Заполняем массив b
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            // Отрицательные элементы - с начала массива
            b[neg_index - 1] = a[i];
            neg_index--;
        }
        else {
            // Остальные элементы - после отрицательных
            b[other_index] = a[i];
            other_index++;
        }
    }

    // Второй вариант (проще): заполняем сразу в нужном порядке
    int c[100];
    int neg_count = 0, other_count = 0;

    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            c[neg_count] = a[i];
            neg_count++;
        }
    }

    for (int i = 0; i < size; i++) {
        if (a[i] >= 0) {
            c[neg_count + other_count] = a[i];
            other_count++;
        }
    }

    cout << "\nРезультат (вариант 1):\n";
    for (int i = 0; i < size; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }

    cout << "\nРезультат (вариант 2, проще):\n";
    for (int i = 0; i < size; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    }

    return 0;
}