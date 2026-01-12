#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double p[100], q[100];
    int size;

    cout << "Введите размер массива (до 100): ";
    cin >> size;

    cout << "Введите элементы массива p:\n";
    for (int i = 0; i < size; i++) {
        cout << "p[" << i << "]: ";
        cin >> p[i];
    }

    // Формируем массив q
    for (int i = 0; i < size; i++) {
        if (i >= 2 && i <= 9) {  // элементы с индексом от 2 до 9 (3-й по 10-й)
            q[i] = -p[i];
        }
        else {
            q[i] = p[i] * i;
        }
    }

    cout << "\nРезультат:\n";
    for (int i = 0; i < size; i++) {
        cout << "q[" << i << "] = " << q[i] << endl;
    }

    return 0;
}