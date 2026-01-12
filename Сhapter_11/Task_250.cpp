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

    // а) На тех же местах
    for (int i = 0; i < size; i++) {
        if (i % 2 == 1) {  // второй, четвертый и т.д. (индексы 1, 3, 5...)
            b[i] = a[i];
        }
        else {
            b[i] = 0;  // остальные элементы - нули
        }
    }

    cout << "\nа) На тех же местах:\n";
    for (int i = 0; i < size; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }

    // б) Подряд с начала массива
    int c[100];
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 1) {  // второй, четвертый и т.д.
            c[index] = a[i];
            index++;
        }
    }

    cout << "\nб) Подряд с начала массива:\n";
    for (int i = 0; i < index; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    }

    return 0;
}