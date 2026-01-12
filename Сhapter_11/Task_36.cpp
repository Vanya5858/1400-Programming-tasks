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

    int k1;
    double n;
    cout << "Введите индекс k1 (0-" << SIZE - 1 << "): ";
    cin >> k1;
    cout << "Введите число n: ";
    cin >> n;

    if (k1 < 0 || k1 >= SIZE) {
        cout << "Неверный индекс!" << endl;
        return 0;
    }

    // а) Из всех положительных элементов вычесть элемент с номером k1,
    // из всех отрицательных – число n. Нулевые элементы оставить без изменения
    cout << "\nа) Результат:" << endl;
    for (int i = 0; i < SIZE; i++) {
        double original = arr[i];

        if (arr[i] > 0) {
            arr[i] -= arr[k1];
        }
        else if (arr[i] < 0) {
            arr[i] -= n;
        }
        // Нулевые элементы не изменяем

        cout << original << " -> " << arr[i];
        if (original == 0) cout << " (не изменился)";
        cout << endl;
    }

    return 0;
}