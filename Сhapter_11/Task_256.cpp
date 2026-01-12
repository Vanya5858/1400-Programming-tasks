#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a[100], b[100], c[100];
    int size;

    cout << "Введите размер массивов (до 100): ";
    cin >> size;

    cout << "Введите элементы массива a (ненулевые):\n";
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "\nВведите элементы массива b (ненулевые):\n";
    for (int i = 0; i < size; i++) {
        cout << "b[" << i << "]: ";
        cin >> b[i];
    }

    // Формируем массив c
    for (int i = 0; i < size; i++) {
        if ((a[i] > 0 && b[i] > 0) || (a[i] < 0 && b[i] < 0)) {
            c[i] = 1;  // одинаковый знак
        }
        else {
            c[i] = 0;  // разные знаки
        }
    }

    cout << "\nРезультат:\n";
    for (int i = 0; i < size; i++) {
        cout << "c[" << i << "] = " << c[i] << endl;
    }

    return 0;
}