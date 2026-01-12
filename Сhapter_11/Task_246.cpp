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
        if (i % 2 != 0) {  // нечетный индекс (1, 3, 5...)
            n[i] = i * m[i];
        }
        else {           // четный индекс (0, 2, 4...)
            if (i != 0) {
                n[i] = m[i] / i;
            }
            else {
                // При i = 0 деление на ноль - пропускаем
                n[i] = 0;
            }
        }
    }

    cout << "\nРезультат:\n";
    for (int i = 0; i < size; i++) {
        cout << "n[" << i << "] = " << n[i] << endl;
    }

    return 0;
}