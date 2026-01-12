#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    double arr[SIZE];

    // Ввод массива
    cout << "Введите " << SIZE << " вещественных чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int m1, m2;
    cout << "Введите индексы m1 и m2 (0-" << SIZE - 1 << "): ";
    cin >> m1 >> m2;

    if (m1 < 0 || m1 >= SIZE || m2 < 0 || m2 >= SIZE) {
        cout << "Неверные индексы!" << endl;
        return 0;
    }

    // а) Ко всем отрицательным элементам прибавить элемент с номером m1,
    // к остальным – элемент с номером m2
    cout << "\nа) Результат сложения:" << endl;
    for (int i = 0; i < SIZE; i++) {
        double original = arr[i];
        if (arr[i] < 0) {
            arr[i] += arr[m1];
        }
        else {
            arr[i] += arr[m2];
        }
        cout << original << " -> " << arr[i] << endl;
    }

    return 0;
}