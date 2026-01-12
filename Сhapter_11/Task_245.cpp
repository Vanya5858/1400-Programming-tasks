#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a[100], b[100];
    int n;

    cout << "Введите размер массивов (до 100): ";
    cin >> n;

    cout << "Введите элементы массива a:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Формируем массив b
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {  // четный индекс (0, 2, 4...)
            b[i] = a[i] * a[i];  // квадрат
        }
        else {           // нечетный индекс (1, 3, 5...)
            b[i] = 2 * a[i];    // удвоенное значение
        }
    }

    cout << "\nРезультат:\n";
    for (int i = 0; i < n; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }

    return 0;
}