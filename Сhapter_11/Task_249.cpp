#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double m[100], n[100];
    int size;

    cout << "Введите размер массива (до 100): ";
    cin >> size;

    cout << "Введите элементы массива m:\n";
    for (int i = 0; i < size; i++) {
        cout << "m[" << i << "]: ";
        cin >> m[i];
    }

    // Формируем массив n
    for (int i = 0; i < size; i++) {
        if (m[i] >= 0) {  // неотрицательный элемент
            n[i] = m[i] / 3.0;
        }
        else {          // отрицательный элемент
            n[i] = m[i] * m[i];
        }
    }

    cout << "\nРезультат:\n";
    for (int i = 0; i < size; i++) {
        cout << "n[" << i << "] = " << n[i] << endl;
    }

    return 0;
}