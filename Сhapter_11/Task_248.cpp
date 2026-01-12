#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a[100], b[100];
    int size;

    cout << "Введите размер массива (до 100): ";
    cin >> size;

    cout << "Введите целые элементы массива a:\n";
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    // Формируем массив b
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {  // четный элемент
            b[i] = a[i] * 2;
        }
        else {              // нечетный элемент
            b[i] = a[i];
        }
    }

    cout << "\nРезультат:\n";
    for (int i = 0; i < size; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }

    return 0;
}