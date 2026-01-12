#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a[100], b[100], c[100];
    int size;

    cout << "Введите размер массива (до 100): ";
    cin >> size;

    cout << "Введите целые элементы массива:\n";
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    // а) На тех же местах
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 != 0) {  // нечетный элемент
            b[i] = a[i];
        }
        else {
            b[i] = 0;  // четные элементы - нули
        }
    }

    cout << "\nа) На тех же местах:\n";
    for (int i = 0; i < size; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }

    // б) Подряд с начала массива
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 != 0) {  // нечетный элемент
            c[index] = a[i];
            index++;
        }
    }

    cout << "\nб) Подряд с начала массива:\n";
    for (int i = 0; i < index; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    }
    cout << "Всего нечетных элементов: " << index << endl;

    return 0;
}