#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a[100], b[100], c[100], b_compact[100], c_compact[100];
    int size;

    cout << "Введите размер массива (до 100): ";
    cin >> size;

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    // а) На тех же местах
    for (int i = 0; i < size; i++) {
        if (a[i] > 0) {  // положительный элемент
            b[i] = a[i];
            c[i] = 0;    // в массиве c - ноль
        }
        else {         // неположительный элемент (≤ 0)
            b[i] = 0;    // в массиве b - ноль
            c[i] = a[i];
        }
    }

    cout << "\nа) На тех же местах:\n";
    cout << "Массив b (положительные):\n";
    for (int i = 0; i < size; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }

    cout << "\nМассив c (остальные):\n";
    for (int i = 0; i < size; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    }

    // б) Подряд с начала массива
    int b_index = 0, c_index = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > 0) {
            b_compact[b_index] = a[i];
            b_index++;
        }
        else {
            c_compact[c_index] = a[i];
            c_index++;
        }
    }

    cout << "\nб) Подряд с начала массива:\n";
    cout << "Массив b (положительные):\n";
    for (int i = 0; i < b_index; i++) {
        cout << "b[" << i << "] = " << b_compact[i] << endl;
    }
    cout << "Всего положительных элементов: " << b_index << endl;

    cout << "\nМассив c (остальные):\n";
    for (int i = 0; i < c_index; i++) {
        cout << "c[" << i << "] = " << c_compact[i] << endl;
    }
    cout << "Всего остальных элементов: " << c_index << endl;

    return 0;
}