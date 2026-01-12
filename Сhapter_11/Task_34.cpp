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

    int k1, k2;
    cout << "Введите индексы k1 и k2 (0-" << SIZE - 1 << "): ";
    cin >> k1 >> k2;

    if (k1 < 0 || k1 >= SIZE || k2 < 0 || k2 >= SIZE) {
        cout << "Неверные индексы!" << endl;
        return 0;
    }

    // а) Из всех положительных элементов вычесть элемент с номером k1,
    // из остальных – элемент с номером k2
    cout << "\nа) Результат вычитания:" << endl;
    for (int i = 0; i < SIZE; i++) {
        double original = arr[i];
        if (arr[i] > 0) {
            arr[i] -= arr[k1];
        }
        else {
            arr[i] -= arr[k2];
        }
        cout << original << " -> " << arr[i] << endl;
    }

    return 0;
}